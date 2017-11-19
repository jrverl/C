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

	//& se llama Ampersand
	//&<var_name> retorna la dirección de memoria de la variable
	//			[A]mpersand = [A]ddress = Dirección
	// *<var_name> variable que recibirá una dirección de memoria
	char *z = &x;



	for (int i=0; i<4; i++){
		printf("%d\n",&y2[i] );
	} 



	return EXIT_SUCCESS;
}

