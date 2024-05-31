using System;
using System.Text.RegularExpressions;
using System.Windows.Forms;

namespace RegistrationFormAPP
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void RegisterButton_Click(object sender, EventArgs e)
        {
            string firstName = FirstNameTextBox.Text;
            string lastName = LastNameTextBox.Text;
            string username = UsernameTextBox.Text;
            string password = PasswordTextBox.Text;
            string email = EmailTextBox.Text;
            string mobileNo = MobileNoTextBox.Text;
            string city = CityComboBox.SelectedItem?.ToString();

            string errorMessage = "";
            bool isValid = true;

            if (!ValidateFirstName(firstName))
            {
                isValid = false;
                errorMessage += "Invalid First Name. ";
            }

            if (!ValidateLastName(lastName))
            {
                isValid = false;
                errorMessage += "Invalid Last Name. ";
            }

            if (!ValidateUsername(username))
            {
                isValid = false;
                errorMessage += "Invalid Username. ";
            }

            if (!ValidatePassword(password))
            {
                isValid = false;
                errorMessage += "Invalid Password. ";
            }

            if (!ValidateEmail(email))
            {
                isValid = false;
                errorMessage += "Invalid Email. ";
            }

            if (!ValidateMobileNo(mobileNo))
            {
                isValid = false;
                errorMessage += "Invalid Mobile No. ";
            }

            if (!ValidateCity(city))
            {
                isValid = false;
                errorMessage += "Invalid City. ";
            }

            if (isValid)
            {
                MessageBox.Show("All inputs are valid!", "Success", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            else
            {
                ResultLabel.Text = errorMessage;
            }
        }

        private bool ValidateFirstName(string firstName)
        {
            return Regex.IsMatch(firstName, @"^[A-Za-z]{1,50}$");
        }

        private bool ValidateLastName(string lastName)
        {
            return Regex.IsMatch(lastName, @"^[A-Za-z]{1,50}$");
        }

        private bool ValidateUsername(string username)
        {
            return Regex.IsMatch(username, @"^[A-Za-z0-9_.]{5,15}$");
        }

        private bool ValidatePassword(string password)
        {
            return Regex.IsMatch(password, @"^(?=.*[A-Za-z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,}$");
        }

        private bool ValidateEmail(string email)
        {
            return Regex.IsMatch(email, @"^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$");
        }


        private bool ValidateMobileNo(string mobileNo)
        {
            return Regex.IsMatch(mobileNo, @"^\d{10}$");
        }

        private bool ValidateCity(string city)
        {
            return city != null && city != "Select";
        }
    }
}
