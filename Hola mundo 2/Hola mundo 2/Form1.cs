namespace Hola_mundo_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Hola mundito");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Close();
        }
        private void button3_Click_1(object sender, EventArgs e)
        {
            Form3 form3 = new Form3();
            form3.Show();


        }
    }
}
