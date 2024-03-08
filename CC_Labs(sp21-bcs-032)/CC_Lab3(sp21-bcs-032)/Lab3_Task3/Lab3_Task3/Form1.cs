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

namespace Lab3_Task3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            dataGridView1.Rows.Clear();

           
            string document = richTextBox1.Text;

   
            string pattern = @"\b[tm]\w*\b";

            
            Regex regex = new Regex(pattern);

            
            MatchCollection matches = regex.Matches(document);

            
            foreach (Match match in matches)
            {
                dataGridView1.Rows.Add(match.Value);
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            dataGridView1.Columns.Add("Match", "Match");
        }
    }
}
