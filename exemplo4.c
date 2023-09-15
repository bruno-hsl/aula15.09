#include <stdio.h>

main(){
    int n = 0, numero = 6, res;
    
   do{
       res  = numero * n;
       printf("\n%d * %d = %d", numero, n, res);
       n++;

    }while(n <=10);

    printf("\ncontinua.....");
   

    return 0;
}