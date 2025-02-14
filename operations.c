#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool primeLoop(int c){
    bool check = true;
    for(int i = 2; i < c-1; i++){
        if(c % i == 0){
            return false;
            check = false;
        }
    }
    return true;
}

void primeFactors(int b){
    printf("prime factors are: ");
   
    while(b % 2 == 0){
        printf("%d ", 2);
        b = b/2;
    }
   
    for(int i = 3; i <= b; i++){
        if(b % i == 0){
            if(primeLoop){
                printf("%d ", i);
            }
            else{
                continue;
            }
        }
    }
}
