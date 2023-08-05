namespace miClase{
	public class Cuenta{

		public int Numero {get; set;}
		public string Identificacion {get; set;}
		public float Saldo {get; set;}
		public string Clave {get; set;}
		public float InteresAnual {get; set;}

		public Cuenta(){
			Numero = 0;
			Identificacion = string.Empty;
			Saldo = 0f;
			Clave = string.Empty;
			InteresAnual = 0f;
		}

	}

}
