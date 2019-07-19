/* Nota estudiante */

#include<stdio.h>
int main(){
    char nota;
    printf("Escriba la nota del estudiante\n");
    scanf("%C",&nota);
    switch(nota){
    case 'a':printf("Excelente!");break;
    case 'b':printf("Muy bien");break;
    case 'c':printf("Bien");break;
    case 'd':printf("Regular");break;
    case 'e':printf("Mal");break;
    case 'f':printf("Reprobado");break;
    default: printf("No ingreso una nota valida");
    }
    return 0;
}
