using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using System.Windows.Forms;

namespace Lab4_Task1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void AnalyzeButton_Click(object sender, EventArgs e)
        {
            string sourceCode = SourceCodeTextBox.Text;
            string[] tokens = AnalyzeSourceCode(sourceCode);
            DisplayTokens(tokens);
        }
        private string[] AnalyzeSourceCode(string sourceCode)
        {
            List<string> tokens = new List<string>();

            
            string[] keywords = { "if", "else", "while", "for", "int", "float", "bool", "true", "false" };
            string identifierPattern = @"\b[a-zA-Z_]\w*\b"; 
            string numberPattern = @"\b[-+]?\d*\.?\d+\b";
            string operatorPattern = @"(\+|\-|\*|\/|=|>|<|>=|<=|&|\||%|!|\^|\(|\))";
            string whitespacePattern = @"\s+";


            int pos = 0;
            while (pos < sourceCode.Length)
            {
                if (char.IsLetter(sourceCode[pos]) || sourceCode[pos] == '_')
                {
                    Match match = Regex.Match(sourceCode.Substring(pos), identifierPattern);
                    string token = match.Value;
                    if (Array.Exists(keywords, k => k == token))
                    {
                        tokens.Add($"Keyword: {token}");
                    }
                    else
                    {
                        tokens.Add($"Identifier: {token}");
                    }
                    pos += match.Length;
                }
                else if (char.IsDigit(sourceCode[pos]))
                {
                    Match match = Regex.Match(sourceCode.Substring(pos), numberPattern);
                    tokens.Add($"Number: {match.Value}");
                    pos += match.Length;
                }
                else if (Regex.IsMatch(sourceCode[pos].ToString(), operatorPattern))
                {
                    tokens.Add($"Operator: {sourceCode[pos]}");
                    pos++;
                }
                else if (Regex.IsMatch(sourceCode[pos].ToString(), whitespacePattern))
                {
                    pos++;
                }
                else
                {
                    
                    pos++;
                }
            }

            return tokens.ToArray();
        }





        private void DisplayTokens(string[] tokens)
        {
            TokensListBox.Items.Clear();
            foreach (string token in tokens)
            {
                TokensListBox.Items.Add(token);
            }
        }
    }
}
