using System;
using System.Collections.Generic;
using System.Text;
using System.Text.RegularExpressions;
using System.Windows.Forms;

namespace Question04
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void AnalyzeButton_Click(object sender, EventArgs e)
        {
            string code = codeTextBox.Text;
            List<Token> tokens = ExtractTokens(code);

            tokenListView.Clear();
            tokenListView.Columns.Add("Token", 250, HorizontalAlignment.Left);
            tokenListView.Columns.Add("Keyword", 100, HorizontalAlignment.Left);
            tokenListView.Columns.Add("Line Number", 100, HorizontalAlignment.Left);

            foreach (var token in tokens)
            {
                ListViewItem item = new ListViewItem(new[] { token.Value, token.Type, token.LineNumber.ToString() });
                tokenListView.Items.Add(item);
            }
        }

        private void SymbolTableButton_Click(object sender, EventArgs e)
        {
            string code = codeTextBox.Text;
            List<Token> tokens = ExtractTokens(code);

            Dictionary<string, Symbol> symbolTable = CreateSymbolTable(tokens);

            StringBuilder tableDisplay = new StringBuilder();
            tableDisplay.AppendLine($"+{"",-30} + {"",-25} + {"",-15}+");
            tableDisplay.AppendLine($"| {"Identifier",-30} | {"Data Type",-25} | {"Value",-15}|");
            tableDisplay.AppendLine($"+{"",-30} + {"",-25} + {"",-15}+");
            tableDisplay.AppendLine(new string('-', 76));

            foreach (var entry in symbolTable)
            {
                tableDisplay.AppendLine($"| {entry.Key,-30} | {entry.Value.DataType,-25} | {entry.Value.Value,-15}|");
            }

            tableDisplay.AppendLine($"+{"",-30} + {"",-25} + {"",-15}+");
            MessageBox.Show(tableDisplay.ToString(), "Symbol Table");
        }

        private List<Token> ExtractTokens(string code)
        {
            var tokens = new List<Token>();
            var lines = code.Split('\n');
            int lineNumber = 1;

            foreach (var line in lines)
            {
                var words = Regex.Split(line, @"(\(|\)|\s+|\t|{|}|;|,|\+|\-|\*|\/|%|=|<|>|!|&|\||\^|~)");

                foreach (var word in words)
                {
                    if (!string.IsNullOrWhiteSpace(word))
                    {
                        string type = "Identifier";
                        if (Regex.IsMatch(word, @"^\d+$")) type = "Number";
                        else if (Regex.IsMatch(word, @"^[\+\-\*\/\%\=\<\>\!\&\|\^\~]+$")) type = "Operator";
                        else if (Regex.IsMatch(word, @"^(if|else|return|int|for|switch|case|while|do|float|double|string|char)$")) type = "Keyword";
                        else if (Regex.IsMatch(word, @"^"".*""$") || Regex.IsMatch(word, @"^'.*'$")) type = "String";

                        tokens.Add(new Token(word, type, lineNumber));
                    }
                }

                lineNumber++;
            }

            return tokens;
        }


        private Dictionary<string, Symbol> CreateSymbolTable(List<Token> tokens)
        {
            var symbolTable = new Dictionary<string, Symbol>();
            string currentType = null;

            foreach (var token in tokens)
            {
                if (token.Type == "Keyword" && (token.Value == "int" || token.Value == "float" || token.Value == "double" || token.Value == "string" || token.Value == "char"))
                {
                    currentType = token.Value;
                }
                else if (currentType != null && token.Type == "Identifier")
                {
                    symbolTable[token.Value] = new Symbol(currentType, "N/A");
                    currentType = null;
                }
            }

            return symbolTable;
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }
    }

    public class Token
    {
        public string Value { get; }
        public string Type { get; }
        public int LineNumber { get; }

        public Token(string value, string type, int lineNumber)
        {
            Value = value;
            Type = type;
            LineNumber = lineNumber;
        }
    }

    public class Symbol
    {
        public string DataType { get; }
        public string Value { get; }

        public Symbol(string dataType, string value)
        {
            DataType = dataType;
            Value = value;
        }
    }
}
