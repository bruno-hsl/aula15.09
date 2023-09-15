#include <stdio.h>

main(){
    int n = 0, numero = 6, res;
    
    while(n <= 10){
       res  = numero * n;
       printf("\n%d * %d = %d", numero, n, res);
       n++;
    }
    

    return 0;
}