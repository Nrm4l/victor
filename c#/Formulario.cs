using System.Drawing;
using System.Windows.Forms;

public class Formulario{

	

	public static void Main(){

		Form formulario = new Form();
		TextBox box  = new TextBox();
		TextBox box2  = new TextBox();
		TextBox result = new TextBox();
		Button btn = new Button();
		Button rest = new Button();


		formulario.Text = "Mi formulario";
		

		box.Location = new Point(160,40);
		box.Size = new Size(50,20);

		box2.Location = new Point(160,60);
		box2.Size = new Size(50,20);

		result.Location = new Point(10,200);

		btn.Text = "sumar";
		btn.Location = new Point(50,90);

		rest.Text = "restar";
		rest.Location = new Point(50,120);


		formulario.Controls.Add(box);
		formulario.Controls.Add(box2);
		formulario.Controls.Add(result);
		formulario.Controls.Add(btn);
		formulario.Controls.Add(rest);

		btn.Click += (sender,e) =>{
			int num1 , num2;

			num1 = int.Parse(box.Text);
			num2 = int.Parse(box2.Text);
			num1 = num1 + num2;

			result.Text = num1.ToString();


		};

		rest.Click += (sender,e) =>{
			int num1, num2;

			num1 = int.Parse(box.Text);
			num2 = int.Parse(box2.Text);

			num1 = num1 - num2;

			result.Text = num1.ToString();
		};


		formulario.ShowDialog();
	}


}