using System;
using System.Linq;
using System.Text.RegularExpressions;
using System.Windows.Forms;

namespace Lab6_Task_1
{
    public partial class Form1 : Form
    {
        private string[] tokens;
        private int currentTokenIndex;

        public Form1()
        {
            InitializeComponent();
        }

        private void ParseButton_Click(object sender, EventArgs e)
        {
            try
            {
               
                // Tokenize the input
                tokens = Tokenize(InputTextBox.Text);
                Console.WriteLine("Tokens: " + string.Join(", ", tokens));

                // Start parsing
                currentTokenIndex = 0;
                string parsedTree = ParseProgram();

                // Display the parsed tree
                OutputTextBox.Text = parsedTree;
            }
            catch (Exception ex)
            {
               
                OutputTextBox.Text = $"Error: {ex.Message}";
            }
        }

        private string[] Tokenize(string input)
        {
            try
            {
                Console.WriteLine("Tokenizing input...");
                // Split input into tokens based on whitespace and trim each token
                return input.Split(new[] { ' ', '\t', '\r', '\n' }, StringSplitOptions.RemoveEmptyEntries)
                            .Select(token => token.Trim())
                            .ToArray();
            }
            catch (Exception ex)
            {
                throw new Exception($"Tokenization error: {ex.Message}");
            }
        }

        private string ParseProgram()
        {
            try
            {
                Console.WriteLine("Parsing program...");
                // Program → ClassDeclaration 
                return ParseClassDeclaration();
            }
            catch (Exception ex)
            {
                throw new Exception($"Parsing error in program: {ex.Message}");
            }
        }

        private string ParseClassDeclaration()
        {
            try
            {
                Console.WriteLine("Parsing class declaration...");
                // ClassDeclaration → class Identifier { MemberList }
                Match("class");
                string className = MatchIdentifier();
                Match("{");
                string memberList = ParseMemberList();
                Match("}");

                // Return the parsed tree
                return $"ClassDeclaration({className}, {memberList}){Environment.NewLine}";
            }
            catch (Exception ex)
            {
                throw new Exception($"Parsing error in class declaration: {ex.Message}");
            }
        }

        private string ParseMemberList()
        {
            try
            {
                Console.WriteLine("Parsing member list...");
                // MemberList → Member MemberList | ε
                if (PeekToken() == "}")
                {
                    // ε (empty)
                    return "";
                }
                else
                {
                    // Member MemberList
                    string member = ParseMember();
                    string memberList = ParseMemberList();
                    return $"{member}, {memberList}";
                }
            }
            catch (Exception ex)
            {
                throw new Exception($"Parsing error in member list: {ex.Message}");
            }
        }

        private string ParseMember()
        {
            try
            {
                Console.WriteLine("Parsing member...");
                // Member → FieldDeclaration | MethodDeclaration
                if (IsType(PeekToken()) && IsIdentifier(PeekToken(1)) && PeekToken(2) == "(")
                {
                    // MethodDeclaration
                    return ParseMethodDeclaration();
                }
                else if (IsType(PeekToken()))
                {
                    // FieldDeclaration
                    return ParseFieldDeclaration();
                }
                else
                {
                    throw new Exception($"Expected a field or method declaration, but found '{PeekToken()}'");
                }
            }
            catch (Exception ex)
            {
                throw new Exception($"Parsing error in member: {ex.Message}");
            }
        }

        private bool IsType(string token)
        {
            return token == "int" || token == "float" || token == "bool" || token == "string";
        }

        private string ParseFieldDeclaration()
        {
            try
            {
                Console.WriteLine("Parsing field declaration...");
                // FieldDeclaration → Type Identifier ;
                string type = MatchType();
                string identifier = MatchIdentifier();
                Match(";");
                return $"FieldDeclaration({type}, {identifier}){Environment.NewLine}";
            }
            catch (Exception ex)
            {
                throw new Exception($"Parsing error in field declaration: {ex.Message}");
            }
        }

        private string ParseMethodDeclaration()
        {
            try
            {
                Console.WriteLine("Parsing method declaration...");
                // MethodDeclaration → Type Identifier ( ParameterList ) { StatementList }
                string type = MatchType();
                string methodName = MatchIdentifier();
                Match("(");
                string parameterList = ParseParameterList();
                Match(")");
                Match("{");
                string statementList = ParseStatementList();
                Match("}");

                // Allow method declaration without a semicolon at the end
                if (PeekToken() == "}")
                {
                    // End of method, no need to match semicolon
                    return $"MethodDeclaration({type}, {methodName}, {parameterList}, {statementList}){Environment.NewLine}";
                }
                else
                {
                   
                    Match(";");
                    return $"MethodDeclaration({type}, {methodName}, {parameterList}, {statementList}){Environment.NewLine}";
                }
            }
            catch (Exception ex)
            {
                throw new Exception($"Parsing error in method declaration: {ex.Message}");
            }
        }


        private string ParseParameterList()
        {
            try
            {
                Console.WriteLine("Parsing parameter list...");
                // ParameterList → Type Identifier ParameterTail | ε
                if (PeekToken() == ")")
                {
                    // ε (empty)
                    return "";
                }
                else
                {
                    // Type Identifier ParameterTail
                    string type = MatchType();
                    string identifier = MatchIdentifier();
                    string parameterTail = ParseParameterTail();
                    return $"{type}, {identifier}, {parameterTail}";
                }
            }
            catch (Exception ex)
            {
                throw new Exception($"Parsing error in parameter list: {ex.Message}");
            }
        }

        private string ParseParameterTail()
        {
            try
            {
                Console.WriteLine("Parsing parameter tail...");
                // ParameterTail → , Type Identifier ParameterTail | ε
                if (PeekToken() == ")")
                {
                    // ε (empty)
                    return "";
                }
                else
                {
                    // , Type Identifier ParameterTail
                    Match(",");
                    string type = MatchType();
                    string identifier = MatchIdentifier();
                    string parameterTail = ParseParameterTail();
                    return $"{type}, {identifier}, {parameterTail}";
                }
            }
            catch (Exception ex)
            {
                throw new Exception($"Parsing error in parameter tail: {ex.Message}");
            }
        }

        private string ParseStatementList()
        {
            try
            {
                Console.WriteLine("Parsing statement list...");
                // StatementList → Statement StatementList | ε
                if (PeekToken() == "}")
                {
                    // ε (empty)
                    return "";
                }
                else
                {
                    // Statement StatementList
                    string statement = ParseStatement();
                    string statementList = ParseStatementList();
                    return $"{statement}, {statementList}";
                }
            }
            catch (Exception ex)
            {
                throw new Exception($"Parsing error in statement list: {ex.Message}");
            }
        }

        private string ParseReturnStatement()
        {
            Match("return");
            string expression = ParseExpression();
            Match(";");
            return $"ReturnStatement({expression})";
        }
        private string ParseStatement()
        {
            string token = PeekToken();
            if (token == "int" || token == "float" || token == "bool" || token == "string" )
                return ParseVariableDeclaration();
            else if (token == "return")
            
                return ParseReturnStatement();
            
            else if (IsType(token))
                return ParseAssignmentStatement();
            else if (token == "if")
                return ParseIfStatement();
            else if (token == "while")
                return ParseWhileStatement();
            else
                return "";
        }

        private string ParseVariableDeclaration()
        {
             string type = MatchType();
            string identifier = MatchIdentifier();
            Match(";");
            return $"VariableDeclaration({type}, {identifier}){Environment.NewLine}";

             
        }


        private string ParseAssignmentStatement()
        {
            try
            {
                Console.WriteLine("Parsing assignment statement...");
                // AssignmentStatement → Identifier = Expression ;
                string identifier = MatchIdentifier();
                Match("=");
                string expression = ParseExpression();
                Match(";");
                return $"AssignmentStatement({identifier}, {expression}){Environment.NewLine}";
            }
            catch (Exception ex)
            {
                throw new Exception($"Parsing error in assignment statement: {ex.Message}");
            }
        }

        private string ParseIfStatement()
        {
            try
            {
                Console.WriteLine("Parsing if statement...");
                // IfStatement → if ( Expression ) { StatementList } ElsePart
                Match("if");
                Match("(");
                string expression = ParseExpression();
                Match(")");
                Match("{");
                string statementList = ParseStatementList();
                Match("}");
                string elsePart = ParseElsePart();
                return $"IfStatement({expression}, {statementList}, {elsePart}){Environment.NewLine}";
            }
            catch (Exception ex)
            {
                throw new Exception($"Parsing error in if statement: {ex.Message}");
            }
        }

        private string ParseElsePart()
        {
            try
            {
                Console.WriteLine("Parsing else part...");
                // ElsePart → else { StatementList } | ε
                if (PeekToken() == "else")
                {
                    // else { StatementList }
                    Match("else");
                    Match("{");
                    string statementList = ParseStatementList();
                    Match("}");
                    return $"ElsePart({statementList}){Environment.NewLine}";
                }
                else
                {
                    // ε (empty)
                    return "";
                }
            }
            catch (Exception ex)
            {
                throw new Exception($"Parsing error in else part: {ex.Message}");
            }
        }

        private string ParseWhileStatement()
        {
            try
            {
                Console.WriteLine("Parsing while statement...");
                // WhileStatement → while ( Expression ) { StatementList }
                Match("while");
                Match("(");
                string expression = ParseExpression();
                Match(")");
                Match("{");
                string statementList = ParseStatementList();
                Match("}");
                return $"WhileStatement({expression}, {statementList}) {Environment.NewLine}";
            }
            catch (Exception ex)
            {
                throw new Exception($"Parsing error in while statement: {ex.Message}");
            }
        }

        private string ParseExpression()
        {
            try
            {
                Console.WriteLine("Parsing expression...");
                // Expression → Identifier | Literal | BinaryExpression
                string token = PeekToken();
                if (IsIdentifier(token))
                {
                    // Identifier
                    return MatchIdentifier();
                }
                else if (IsLiteral(token))
                {
                    // Literal
                    return MatchLiteral();
                }
                else
                {
                    // BinaryExpression
                    return ParseBinaryExpression();
                }
            }
            catch (Exception ex)
            {
                throw new Exception($"Parsing error in expression: {ex.Message}");
            }
        }

        private string ParseBinaryExpression()
        {
            try
            {
                Console.WriteLine("Parsing binary expression...");
                // BinaryExpression → Expression Operator Expression
                string expression1 = ParseExpression();
                string op = MatchOperator();
                string expression2 = ParseExpression();
                return $"BinaryExpression({expression1}, {op}, {expression2}){Environment.NewLine}";
            }
            catch (Exception ex)
            {
                throw new Exception($"Parsing error in binary expression: {ex.Message}");
            }
        }

        private string Match(string expectedToken)
        {
            string token = PeekToken();
            if (token == expectedToken)
            {
                currentTokenIndex++;
                return token;
            }
            else
            {
                throw new Exception($"Expected '{expectedToken}', but found '{token}'");
            }
        }

        private string PeekToken()
        {
            if (currentTokenIndex < tokens.Length)
            {
                return tokens[currentTokenIndex];
            }
            else
            {
                throw new Exception("Unexpected end of input");
            }
        }

        private string PeekToken(int offset)
        {
            int index = currentTokenIndex + offset;
            if (index < tokens.Length)
            {
                return tokens[index];
            }
            else
            {
                throw new Exception("Unexpected end of input");
            }
        }

        private string MatchIdentifier()
        {
            string token = PeekToken();
            if (IsIdentifier(token))
            {
                return Match(token);
            }
            else
            {
                throw new Exception($"Expected an identifier, but found '{token}'");
            }
        }

        private string MatchType()
        {
            string token = PeekToken();
            if (IsType(token))
            {
                return Match(token);
            }
            else
            {
                throw new Exception($"Expected a type (int, float, bool, string), but found '{token}'");
            }
        }

        private string MatchLiteral()
        {
            string token = PeekToken();
            if (IsLiteral(token))
            {
                return Match(token);
            }
            else
            {
                throw new Exception($"Expected a literal (true, false, integer, float), but found '{token}'");
            }
        }

        private string MatchOperator()
        {
            string token = PeekToken();
            if (IsOperator(token))
            {
                return Match(token);
            }
            else
            {
                throw new Exception($"Expected an operator (+, -, *, /, ==, !=, <, <=, >, >=), but found '{token}'");
            }
        }

        private bool IsIdentifier(string token)
        {
            return Regex.IsMatch(token, @"^[a-zA-Z][a-zA-Z0-9]*$");
        }

        private bool IsLiteral(string token)
        {
            return Regex.IsMatch(token, @"^(true|false|\d+(\.\d+)?)$");
        }

        private bool IsOperator(string token)
        {
            return Regex.IsMatch(token, @"^(\+|-|\*|/|==|!=|<|<=|>|>=)$");
        }
    }
}
