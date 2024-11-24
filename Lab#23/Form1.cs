namespace Lab_23
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
        }

        private void MainForm_Load(object sender, EventArgs e)
        {
            MessageBox.Show("����� ����������", "������");
        }

        private void MainForm_FormClosing(object sender, FormClosingEventArgs e)
        {
            MessageBox.Show("��������?", "", MessageBoxButtons.OKCancel);

            e.Cancel = true;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MainForm1 mainForm1 = new MainForm1();
            mainForm1.ShowDialog();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            MainForm2 mainForm2 = new MainForm2();
            mainForm2.ShowDialog();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            MainForm3 mainForm3 = new MainForm3();
            mainForm3.ShowDialog();
        }

        
    }
}
