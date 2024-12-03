namespace Lab_25
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label2_Click(object sender, EventArgs e)
        {
            label2.Text = $"{dateTimePicker1.MaxDate.Year - dateTimePicker1.Value.Year}";
        }

        private void trackBar1_Scroll(object sender, EventArgs e)
        {
            numericUpDown1.Value = trackBar1.Value;
        }

        private void numericUpDown1_ValueChanged(object sender, EventArgs e)
        {
            trackBar1.Value = (int)numericUpDown1.Value;
        }

        private void label5_Click(object sender, EventArgs e)
        {
            label5.Text = "־בת¸ל ספונû " + $"{(double)4 / (double)3 * 3.14 * (double)numericUpDown2.Value * (double)numericUpDown2.Value * (double)numericUpDown2.Value}";
        }

        private void label6_Click(object sender, EventArgs e)
        {
            label6.Text = "ֿכמשאהü ספונû " + $"{4 * 3.14 * (double)numericUpDown2.Value * (double)numericUpDown2.Value}";
        }
    }
}
