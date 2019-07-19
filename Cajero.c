/* Cajero automatico con $1000 */

#include<stdio.h>
#include<stdlib.h>

int main(){
    int opcion;
    float ingreso,saldo=1000,retiro;

    printf("\tBienvenido a su cajero virtual");
    printf("\n1. Ingreso en Cuenta");
    printf("\n2. Retiro de Saldo");
    printf("\n3. Salir");
    printf("\nElija la opcion deseada: ");
    scanf("%i",&opcion);

    switch(opcion){
        case 1: printf("\nCuanto desea ingresar? ");
          scanf("%f",&ingreso);
          saldo += ingreso;
          printf("Su nuevo saldo es %.2f",saldo);
          break;
        case 2: printf("\nCuanto desea retirar? ");
          scanf("%f",&retiro);
          if(retiro>saldo){
            printf("Saldo insuficiente");
          }else{
            printf("Retire su dinero");
            saldo -= retiro;
            printf("\nSu nuevo saldo es %.2f",saldo);
          }
          break;
        case 3: system("cls");
          printf("Hasta luego");
          break;
    }
    return 0;
}
