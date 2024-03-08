using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab2_Task2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            
                Console.WriteLine("Button 1 clicked " + richTextBox1.Text); 
            string pattern = @"(==|!=|>=|<=|>|<)";


            listBox1.Items.Clear();

                Regex regex = new Regex(pattern);
                MatchCollection matches = regex.Matches(richTextBox1.Text);

                foreach (Match match in matches)
                {
                    listBox1.Items.Add(match.Value);
                }
            if(matches.Count <=0)
            {
                MessageBox.Show("There is no Relational Operator");
            }
            richTextBox1.Text = " ";
        }
    }
}
