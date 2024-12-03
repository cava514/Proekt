namespace Lab_25
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            label1 = new Label();
            dateTimePicker1 = new DateTimePicker();
            label2 = new Label();
            trackBar1 = new TrackBar();
            label3 = new Label();
            numericUpDown1 = new NumericUpDown();
            label4 = new Label();
            numericUpDown2 = new NumericUpDown();
            label5 = new Label();
            label6 = new Label();
            ((System.ComponentModel.ISupportInitialize)trackBar1).BeginInit();
            ((System.ComponentModel.ISupportInitialize)numericUpDown1).BeginInit();
            ((System.ComponentModel.ISupportInitialize)numericUpDown2).BeginInit();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(12, 9);
            label1.Name = "label1";
            label1.Size = new Size(93, 15);
            label1.TabIndex = 0;
            label1.Text = "Дата рождения:";
            // 
            // dateTimePicker1
            // 
            dateTimePicker1.Location = new Point(12, 27);
            dateTimePicker1.MaxDate = new DateTime(2024, 12, 1, 0, 0, 0, 0);
            dateTimePicker1.Name = "dateTimePicker1";
            dateTimePicker1.Size = new Size(200, 23);
            dateTimePicker1.TabIndex = 1;
            dateTimePicker1.Value = new DateTime(2024, 12, 1, 0, 0, 0, 0);
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(218, 33);
            label2.Name = "label2";
            label2.Size = new Size(31, 15);
            label2.TabIndex = 2;
            label2.Text = "Лет?";
            label2.Click += label2_Click;
            // 
            // trackBar1
            // 
            trackBar1.Location = new Point(12, 71);
            trackBar1.Maximum = 50;
            trackBar1.Minimum = 10;
            trackBar1.Name = "trackBar1";
            trackBar1.Size = new Size(200, 45);
            trackBar1.TabIndex = 3;
            trackBar1.Value = 10;
            trackBar1.Scroll += trackBar1_Scroll;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(12, 53);
            label3.Name = "label3";
            label3.Size = new Size(139, 15);
            label3.TabIndex = 4;
            label3.Text = "Температура в комнате:";
            // 
            // numericUpDown1
            // 
            numericUpDown1.Location = new Point(218, 71);
            numericUpDown1.Maximum = new decimal(new int[] { 50, 0, 0, 0 });
            numericUpDown1.Minimum = new decimal(new int[] { 10, 0, 0, 0 });
            numericUpDown1.Name = "numericUpDown1";
            numericUpDown1.Size = new Size(38, 23);
            numericUpDown1.TabIndex = 5;
            numericUpDown1.Value = new decimal(new int[] { 10, 0, 0, 0 });
            numericUpDown1.ValueChanged += numericUpDown1_ValueChanged;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(12, 101);
            label4.Name = "label4";
            label4.Size = new Size(88, 15);
            label4.TabIndex = 6;
            label4.Text = "Радиус сферы:";
            // 
            // numericUpDown2
            // 
            numericUpDown2.DecimalPlaces = 2;
            numericUpDown2.Location = new Point(12, 122);
            numericUpDown2.Name = "numericUpDown2";
            numericUpDown2.Size = new Size(200, 23);
            numericUpDown2.TabIndex = 7;
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(218, 115);
            label5.Name = "label5";
            label5.Size = new Size(88, 15);
            label5.TabIndex = 8;
            label5.Text = "Объем сферы:";
            label5.Click += label5_Click;
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Location = new Point(218, 130);
            label6.Name = "label6";
            label6.Size = new Size(102, 15);
            label6.TabIndex = 9;
            label6.Text = "Площадь сферы:";
            label6.Click += label6_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(label6);
            Controls.Add(label5);
            Controls.Add(numericUpDown2);
            Controls.Add(label4);
            Controls.Add(numericUpDown1);
            Controls.Add(label3);
            Controls.Add(trackBar1);
            Controls.Add(label2);
            Controls.Add(dateTimePicker1);
            Controls.Add(label1);
            Name = "Form1";
            Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)trackBar1).EndInit();
            ((System.ComponentModel.ISupportInitialize)numericUpDown1).EndInit();
            ((System.ComponentModel.ISupportInitialize)numericUpDown2).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private DateTimePicker dateTimePicker1;
        private Label label2;
        private TrackBar trackBar1;
        private Label label3;
        private NumericUpDown numericUpDown1;
        private Label label4;
        private NumericUpDown numericUpDown2;
        private Label label5;
        private Label label6;
    }
}
