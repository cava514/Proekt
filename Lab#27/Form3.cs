using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Linq.Expressions;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab_27
{
    public partial class Form3 : Form
    {
        public Form3()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if(checkedListBox1.CheckedItems.Count == 0)
            {
                label1.Text = "Эти данные обязательны для заполнения";
            }
            else
            {
                label1.Text = "Вы выбрали следующие курсы:";
                foreach (var i in checkedListBox1.CheckedItems)
                {
                    label1.Text += '\n' + i.ToString();
                }
            }
        }
    }
}
