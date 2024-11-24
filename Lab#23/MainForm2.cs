using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab_23
{
    public partial class MainForm2 : MainForm1
    {
        public MainForm2()
        {
            InitializeComponent();
        }

        private void MainForm2_Load(object sender, EventArgs e)
        {
            Text = "Задание №3";
            label1.Text = DateTime.Now.ToString();
        }
    }
}
