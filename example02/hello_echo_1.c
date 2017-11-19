#include <stdio.h>
int main (int argc, char *argv[]){
	/*
	 * argci: 	Es el numero de argumentos que recibe nuestro programa
	 *			cuando es llamado desde la linea de comandos ( y desde 
	 *			cualquier otro lado)
	 *
	 *			El primer argumento es el nombre del ejecutable, por lo cual
	 *			si no le pasamos argumentos al programa nos imprimira 1	
	*/

	//printf("%d",argci); 
	//printf("%d",argv[0]);
		for (int i =1; i< argc; i++){
		printf("%d\t",i );
		printf("%s\n", argv[i]);
	}
} 