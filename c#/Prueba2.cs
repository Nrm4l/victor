using System.Windows.Forms;
using miClase;

public class prueba2{
	public static void Main(){

		Form formulario = new Form();
		Label texto = new Label();
		Cuenta cuenta = new Cuenta();

		formulario.Text = "Cuenta Bancaria ";
		texto.Text = cuenta.Numero.ToString();




		formulario.Controls.Add(texto);

		formulario.ShowDialog();


	}
}