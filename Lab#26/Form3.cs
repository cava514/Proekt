using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab_26
{
    public partial class Form3 : Form
    {
        public Form3()
        {
            InitializeComponent();
        }

        private void Form3_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (radioButton1.Checked == true)
            {
                label3.Text = "Ответ: " + $"{(double)numericUpDown1.Value + (double)numericUpDown2.Value}";
            }
            if (radioButton2.Checked == true)
            {
                label3.Text = "Ответ: " + $"{(double)numericUpDown1.Value - (double)numericUpDown2.Value}";
            }
            if (radioButton3.Checked == true)
            {
                label3.Text = "Ответ: " + $"{(double)numericUpDown1.Value * (double)numericUpDown2.Value}";
            }
            if (radioButton4.Checked == true && (double)numericUpDown2.Value != 0)
            {
                label3.Text = "Ответ: " + $"{(double)numericUpDown1.Value / (double)numericUpDown2.Value}";
            }
            if (radioButton4.Checked == true && (double)numericUpDown2.Value == 0)
            {
                label3.Text = "Ответ: Данны не корректны";
            }
        }
    }
}
