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
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace Lab3_task2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            dataGridView1.Columns.Add("Number", "Number");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            dataGridView1.Rows.Clear();

            
            string input = textBox1.Text.Trim();
            textBox1.Text = " ";
             string pattern = @"^(8e4|5e-2|6e9)$";
            Regex regex = new Regex(pattern);
            if (regex.IsMatch(input))
            {
               dataGridView1.Rows.Add(input);
            }
            else
            {
                MessageBox.Show("Invalid input.Enter a number in the format: 8e4, 5e-2, or 6e9", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        
    }
    }
}
