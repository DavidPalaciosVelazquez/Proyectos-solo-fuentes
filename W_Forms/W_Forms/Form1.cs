using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace W_Forms
{
    public partial class Principal : Form
    {
        bool TextoCambiado = false;
        bool cambio = true;
        string narchivo = "";
        public Principal()
        {
            InitializeComponent();
        }

        private void Principal_Load(object sender, EventArgs e)
        {

        }

        private void AcercaDeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            AcercaDe acercaDe = new AcercaDe();
            acercaDe.ShowDialog();
        }

        private void CortarToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void SalirToolStripMenuItem1_Click(object sender, EventArgs e)
        {
            
            Application.Exit();
        }

        private void imptimirToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void salirToolStripMenuItem_Click(object sender, EventArgs e)
        {
            DialogResult dialog = MessageBox.Show(this, "¿Desea cerral la aplicacion?", "Mi aplicacion", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
            if (dialog == DialogResult.Yes)
            {
                Application.Exit();
            }
            else if (dialog == DialogResult.No)
            {
            
            }
        }

        private void Principal_FormClosing(object sender, FormClosingEventArgs e)
        {
            DialogResult dialog = MessageBox.Show(this, "¿Desea cerral la aplicacion?", "Mi aplicacion", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
            
             if (dialog == DialogResult.No)
            {
                e.Cancel = true;
            }
        }

        private void statusStrip1_ItemClicked(object sender, ToolStripItemClickedEventArgs e)
        {

        }

        private void abrirToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (!TextoCambiado)
            {
                cambio = false;
                if (openFileDialog1.ShowDialog() == DialogResult.OK)
                {
                    richTextBox1.LoadFile(openFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                }
                narchivo = openFileDialog1.FileName;
                cambio = true;
            }
            else
            {
                DialogResult dialog = MessageBox.Show(this, "Tiene texto Modificado/n ¿Desea Guardarlo en el archivo actual?", "Mi aplicacion", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Question);
                if (dialog == DialogResult.Cancel)
                {
                    new CancelEventArgs().Cancel = true;
                }
                else if (dialog == DialogResult.Yes)
                {
                    if (narchivo == "")
                    {
                        MessageBox.Show("guardar como");
                        if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                        {
                            richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                            narchivo = saveFileDialog1.FileName;
                        }
                    }
                    else
                    {
                        MessageBox.Show("guardar");
                        if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                        {
                            richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                            narchivo = saveFileDialog1.FileName;
                        }

                    }
                    TextoCambiado = false;
                }
                else if (dialog == DialogResult.No)
                {
                     MessageBox.Show("guardar como");
                    if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                        narchivo = saveFileDialog1.FileName;
                    }
                    TextoCambiado = false;
                }
               
            }
        }

        private void guardarToolStripMenuItem_Click(object sender, EventArgs e)
        {
           
                if (narchivo == "")
                {
                    MessageBox.Show("guardar como");
                    if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                        narchivo = saveFileDialog1.FileName;
                    }
                }
            else
            {
                    DialogResult dialogResult= MessageBox.Show("guardar");
                    if (dialogResult == DialogResult.OK)
                    {
                        richTextBox1.SaveFile(narchivo, RichTextBoxStreamType.PlainText);
                        narchivo = saveFileDialog1.FileName;
                    }
            }
            TextoCambiado = false;


        }

        private void richTextBox1_TextChanged(object sender, EventArgs e)
        {

            if (cambio)
            {
                TextoCambiado = true;
            }

        }

        private void nuevoToolStripMenuItem_Click(object sender, EventArgs e)

        {
            if (!TextoCambiado)
            {
                richTextBox1.Clear();
                narchivo = "";
            }
            else
            {
                DialogResult dialog = MessageBox.Show(this, "Tiene texto Modificado/n ¿Desea Guardarlo en el archivo actual?", "Mi aplicacion", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Question);
                if (dialog == DialogResult.Yes)
                {
                    if (narchivo == "")
                    {
                        MessageBox.Show("guardar como");
                        if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                        {
                            richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                            narchivo = saveFileDialog1.FileName;
                        }
                    }
                    else
                    {
                        MessageBox.Show("guardar");
                        if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                        {
                            richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                            narchivo = saveFileDialog1.FileName;
                        }
                    }
                    TextoCambiado = false;
                }
                if (dialog == DialogResult.No)
                {
                    MessageBox.Show("guardar como");
                    if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                        narchivo = saveFileDialog1.FileName;
                    }
                    TextoCambiado = false;
                }
                if (dialog == DialogResult.Cancel)
                {
                    new CancelEventArgs().Cancel = true;
                }
            }
        }

        private void guardarComoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                narchivo = saveFileDialog1.FileName;
            }
            TextoCambiado = false;
        }

        private void toolStripStatusLabel1_Click(object sender, EventArgs e)
        {
            toolStripStatusLabel1.Text = narchivo;
        }
    }
}
//********************Examen Practico de Segundo PARCIAL*********************************//