/* Sentencia Switch

  switch(selector){
    case etiqueta1 : sentencia1;break;
    case etiqueta2 : sentencia2;break;
    case etiqueta3 : sentencia3;break;
    default: sentencias;
} */

//ejemplo del numero

#include<stdio.h>

int main(){
	int numero;
	printf("Digite un numero entre 1 y 3 \n");
	scanf("%i",&numero);
	
	switch(numero){
		case 1: printf("Es el numero 1");break;
		case 2:printf("Es el numero 2");break;
		case 3:printf("Es el numero 3");break;
		default: printf("No escribio un numero correcto");
	}
	return 0;
}
