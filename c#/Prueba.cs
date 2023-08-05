using System;
using System.Windows.Forms;
using System.Drawing;

public class Prueba{
	public static void Main(){
		
		Form formulario = new Form();
		TextBox box = new TextBox();
		TextBox box2 = new TextBox();
		Point ubic = new Point();

		formulario.Text = "Mi formulario";

		ubic.X = 50;
		ubic.Y = 30;

		box.Location = ubic;

		ubic.X = 50;
		ubic.Y = 50;

		box2.Location = ubic;

		formulario.Controls.Add(box);
		formulario.Controls.Add(box2);

		formulario.ShowDialog();


	}
}