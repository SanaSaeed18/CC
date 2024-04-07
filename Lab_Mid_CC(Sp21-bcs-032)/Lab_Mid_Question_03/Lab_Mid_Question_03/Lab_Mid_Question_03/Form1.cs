using System;
using System.Collections.Generic;
using System.ComponentModel;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
namespace Lab_Mid_Question_03
{
 
        public partial class Form1 : Form
        {
            private static Random random = new Random();

            public Form1()
            {
                InitializeComponent();
            }

            private void button1_Click(object sender, EventArgs e)
            {
                string firstName = textBox1.Text;
                string lastName = textBox2.Text;
                string registrationNumber = textBox3.Text;

                // Validate input
                if (string.IsNullOrWhiteSpace(firstName) || string.IsNullOrWhiteSpace(lastName))
                {
                    MessageBox.Show("Please enter your first and last name.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    return;
                }

                if (registrationNumber.Length < 2 )
                {
                    MessageBox.Show("Please enter a valid registration number with at least two digits.", "Invalid Registration Number", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                    return;
                }

                // Generate password
                string password = GeneratePassword(firstName, lastName, registrationNumber);
                textBox4.Text = password;
            }

            private static string GeneratePassword(string firstName, string lastName, string registrationNumber)
            {
                StringBuilder password = new StringBuilder();

                // Rule (d): Must contain initials of first and last name
                password.Append(firstName[0]);
                password.Append(lastName[0]);

                // Rule (e): Must contain all odd letters of your first name
                for (int i = 0; i < firstName.Length; i++)
                {
                    if (i % 2 == 0)
                    {
                        password.Append(firstName[i]);
                    }
                }

                // Rule (f): Must contain all even letters of your last name
                for (int i = 0; i < lastName.Length; i++)
                {
                    if (i % 2 != 0)
                    {
                        password.Append(lastName[i]);
                    }
                }

                // Rule (a): At least one uppercase alphabet
                password.Append(GetRandomUppercase());

                // Rule (b): At least 4 numbers, two numbers must be your registration numbers
                //in case of complete reg no it takes last two digits that is registration number
                string lastTwoDigits = registrationNumber.Substring(Math.Max(0, registrationNumber.Length - 2));
                foreach (char c in lastTwoDigits)
                {
                    password.Append(c);
                }


                int numCount = 0;
                while (numCount < 2)
                {
                    char c = GetRandomDigit();
                    password.Append(c);
                    numCount++;


                }
                
                // Rule (c): At least 2 special characters
                password.Append(GetRandomSpecialCharacter());
                password.Append(GetRandomSpecialCharacter());

            // Rule (g): Maximum length of 16 
            if (password.Length > 16)
                {
                    password.Remove(16, password.Length - 16);
                }

                return password.ToString();
            }

            static char GetRandomUppercase()
            {
                return (char)random.Next('A', 'Z' + 1);
            }

            static char GetRandomDigit()
            {
                return (char)random.Next('0', '9' + 1);
            }

            static char GetRandomSpecialCharacter()
            {
                string specialChars = "!@#$%^&*()-_+=[]{}|;:,.<>?";
                return specialChars[random.Next(specialChars.Length)];
            }


        }
        
    
}
