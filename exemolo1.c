#include <stdio.h>

main(){
    int n = 0;

    printf("%d", n);

    n++; //adicionando uma unidade a variavel

    printf("\n%d",n);

    n = n + 1;

    n += 1;

    printf("\n%d",n);

    n += 2;

    printf("\n%d",n);

    n += 10;

    printf("\n%d",n);

    n--;

    printf("\n%d",n);
    
    n = n - 1;

    n -= 1;

    printf("\n%d",n);

    n -= 10;

    printf("\n%d",n);
    return 0;
}