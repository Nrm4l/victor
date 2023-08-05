using System.Windows.Forms;
namespace miClase{
	public class Mostrar{
		
		public void mostrar(){
			Form formulario = new Form();
			Button btn = new Button();

			btn.Text = "hola Mundo";

			formulario.Controls.Add(btn);
			formulario.ShowDialog();
		}


	}
}