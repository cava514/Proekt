﻿namespace Lab_23
{
    partial class MainForm2
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
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
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            label1 = new Label();
            SuspendLayout();
            // 
            // label1
            // 
            label1.Dock = DockStyle.Right;
            label1.Location = new Point(762, 100);
            label1.Name = "label1";
            label1.Size = new Size(38, 350);
            label1.TabIndex = 1;
            label1.Text = "label1";
            // 
            // MainForm2
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(label1);
            Name = "MainForm2";
            Text = "MainForm2";
            TransparencyKey = Color.White;
            Load += MainForm2_Load;
            Controls.SetChildIndex(label1, 0);
            ResumeLayout(false);
        }

        #endregion

        private Label label1;
    }
}