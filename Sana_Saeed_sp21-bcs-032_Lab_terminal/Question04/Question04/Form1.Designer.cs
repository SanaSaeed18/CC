namespace Question04
{
    partial class Form1
    {
        private System.ComponentModel.IContainer components = null;

        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.codeTextBox = new System.Windows.Forms.TextBox();
            this.analyzeButton = new System.Windows.Forms.Button();
            this.symbolTableButton = new System.Windows.Forms.Button();
            this.tokenListView = new System.Windows.Forms.ListView();
            this.TokenColumn = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.KeywordColumn = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.LineNumberColumn = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(12, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(170, 20);
            this.label1.TabIndex = 0;
            this.label1.Text = "Enter Sample Code:";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(526, 9);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(116, 20);
            this.label2.TabIndex = 1;
            this.label2.Text = "Symbol Table";
            this.label2.Click += new System.EventHandler(this.label2_Click);
            // 
            // codeTextBox
            // 
            this.codeTextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.codeTextBox.Location = new System.Drawing.Point(16, 32);
            this.codeTextBox.Multiline = true;
            this.codeTextBox.Name = "codeTextBox";
            this.codeTextBox.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.codeTextBox.Size = new System.Drawing.Size(500, 400);
            this.codeTextBox.TabIndex = 2;
            // 
            // analyzeButton
            // 
            this.analyzeButton.BackColor = System.Drawing.SystemColors.ControlLight;
            this.analyzeButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.analyzeButton.Location = new System.Drawing.Point(200, 450);
            this.analyzeButton.Name = "analyzeButton";
            this.analyzeButton.Size = new System.Drawing.Size(100, 40);
            this.analyzeButton.TabIndex = 3;
            this.analyzeButton.Text = "Analyze";
            this.analyzeButton.UseVisualStyleBackColor = false;
            this.analyzeButton.Click += new System.EventHandler(this.AnalyzeButton_Click);
            // 
            // symbolTableButton
            // 
            this.symbolTableButton.BackColor = System.Drawing.SystemColors.ControlLight;
            this.symbolTableButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.symbolTableButton.Location = new System.Drawing.Point(650, 450);
            this.symbolTableButton.Name = "symbolTableButton";
            this.symbolTableButton.Size = new System.Drawing.Size(150, 40);
            this.symbolTableButton.TabIndex = 4;
            this.symbolTableButton.Text = "Symbol Table";
            this.symbolTableButton.UseVisualStyleBackColor = false;
            this.symbolTableButton.Click += new System.EventHandler(this.SymbolTableButton_Click);
            // 
            // tokenListView
            // 
            this.tokenListView.Columns.AddRange(new System.Windows.Forms.ColumnHeader[] {
            this.TokenColumn,
            this.KeywordColumn,
            this.LineNumberColumn});
            this.tokenListView.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.tokenListView.FullRowSelect = true;
            this.tokenListView.GridLines = true;
            this.tokenListView.HideSelection = false;
            this.tokenListView.Location = new System.Drawing.Point(530, 32);
            this.tokenListView.Name = "tokenListView";
            this.tokenListView.Size = new System.Drawing.Size(500, 400);
            this.tokenListView.TabIndex = 5;
            this.tokenListView.UseCompatibleStateImageBehavior = false;
            this.tokenListView.View = System.Windows.Forms.View.Details;
            // 
            // TokenColumn
            // 
            this.TokenColumn.Text = "Token";
            this.TokenColumn.Width = 250;
            // 
            // KeywordColumn
            // 
            this.KeywordColumn.Text = "Keyword";
            this.KeywordColumn.Width = 100;
            // 
            // LineNumberColumn
            // 
            this.LineNumberColumn.Text = "Line Number";
            this.LineNumberColumn.Width = 100;
            // 
            // Form1
            // 
            this.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.ClientSize = new System.Drawing.Size(1040, 500);
            this.Controls.Add(this.tokenListView);
            this.Controls.Add(this.symbolTableButton);
            this.Controls.Add(this.analyzeButton);
            this.Controls.Add(this.codeTextBox);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Lexical Analyzer";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox codeTextBox;
        private System.Windows.Forms.Button analyzeButton;
        private System.Windows.Forms.Button symbolTableButton;
        private System.Windows.Forms.ListView tokenListView;
        private System.Windows.Forms.ColumnHeader TokenColumn;
        private System.Windows.Forms.ColumnHeader KeywordColumn;
        private System.Windows.Forms.ColumnHeader LineNumberColumn;
    }
}
