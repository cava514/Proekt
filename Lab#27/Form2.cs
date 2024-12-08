using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab_27
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if(comboBox1.SelectedItem == null)
            {
                label2.Text = "Введите пункт назначения";
            }
            else
            {
                label2.Text = "Билет: Архангельс - " + comboBox1.Text;
            }
        }
    }
}
