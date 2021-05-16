#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int v;
    
    for(v=1;v<=100;v++)
    {
        if((v%3!=0)&&(v%5!=0)&&(v%15!=0))
            printf("%d ", v );
        
        if((v%3==0)&&(v%15!=0))
            printf("FIZZ ");
        
        if((v%5==0)&&(v%15!=0))
            printf("BUZZ ");
        
        if(v%15==0)
            printf("FIZZBUZZ ");
    }

    
    
    return 0;
    
}
