#include <stdio.h>

main(){
    int numero;
    int contador;

    printf("Digite um numero: ");
    scanf("%d", & numero);

    for(contador = 0; contador <= numero; contador+=2){
        printf("\n%d", contador);
    }

}