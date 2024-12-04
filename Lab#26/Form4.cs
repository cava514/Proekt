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
    public partial class Form4 : Form
    {
        public Form4()
        {
            InitializeComponent();
        }

        private void Form4_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if(textBox1.Text != null && textBox2.Text != null)
            {
                if(dateTimePicker2.Checked == true)
                {
                    label3.Text = "Билет: " + dateTimePicker1.Text + " " + textBox1.Text + "-" + textBox2.Text;
                    label4.Text = "Обратный билет: " + dateTimePicker2.Text + " " + textBox2.Text + "-" + textBox1.Text;
                }
                else
                {
                    label3.Text = "Билет: " + dateTimePicker1.Text + " " + textBox1.Text + "-" + textBox2.Text;
                }
            }
            else
            {
                label3.Text = "Заполните пропуски!";
            }
        }
    }
}
