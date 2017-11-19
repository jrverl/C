#include <stdio.h>
#include <stdlib.h>

/*Stdlib.h contiene las variables para los valores de retorno. */
/*			exit_success	0	
			Exit_failure	1
			char y2[] = {'h','o','l','a','\0'}; añadiendo fin de linea
*/

int main (void){
	/*Variables */
	char x = 'x';
	char y1[] = "hola";
	char y2[] = {'h','o','l','a'};

	char *py1;
	py1 = &y1[0];
	//& se llama Ampersand
	//&<var_name> retorna la dirección de memoria de la variable
	//			[A]mpersand = [A]ddress = Dirección
	// *<var_name> variable que recibirá una dirección de memoria
	char *z = &x;

	/*Cuerpo del programa*/
	//printf ("La variable x tiene por valor '%c' y esta en la direccion '%d' \n",x,&x);
	printf ("Variable 'x'\n");
	printf ("* Valor : '%c'\n", x);
	printf ("* Direccion:	'%x'\n", &x );

	printf ("Variable 'y1'\n");
	printf ("* Valor : '%c'\n", y1);
	printf ("* Direccion:	'%x'\n", &y1 );


	printf ("Variable 'y2'\n");
	printf ("* Valor : '%c'\n", y2);
	printf ("* Direccion:	'%x'\n", &y2 );

	///char *z = &x;
	/// z=  la direccion de x &x
	/// *z = el valor de x

	printf ("Variable 'z'\n");
	printf ("* Valor : '%c'\n", *z);
	printf ("* Direccion:	'%x'\n", z);

	printf ("Variable 'py1'\n");
	printf ("* Valor : '%c'\n", *py1);
	printf ("* Direccion:	'%x'\n",py1);

	printf ("Sumando valores a py1\n");

	for (int i = 0; i<5;i++){
		printf("py1 + [%i]: {Val: %c, Dir: %x}\n",
			i,
			*(py1+i),
			(py1+i));
	}

	
	return EXIT_SUCCESS;
}

