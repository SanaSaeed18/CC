using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace Lab1_Task2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            dataGridView1.ColumnCount = 4;
            dataGridView1.Columns[0].Name = "ID";
            dataGridView1.Columns[1].Name = "Name";
            dataGridView1.Columns[2].Name = "Age";
            dataGridView1.Columns[3].Name = "University";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string id = textBox2.Text;
            string name = textBox1.Text;
            string age = textBox3.Text;
            string university = textBox4.Text;

            
            dataGridView1.Rows.Add(id, name, age,university);
            textBox2.Clear();
            textBox1.Clear();
            textBox3.Clear();
            textBox4.Clear();
        }

        private void label5_Click(object sender, EventArgs e)
        {

        }
    }
}

        
