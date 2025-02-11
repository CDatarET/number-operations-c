#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    printf("enter a number\n");
    int n;
    scanf("%d", &n);

    printf("square root of %d is %f \n", n, sqrt(n));
    
    printf("square of %d is %f \n", n, pow(n , 2));
    
    printf("cube of %d is %f \n", n, pow(n , 3));
    
    if(n == 1){
        printf("%d is neither prime nor composite \n", n);
    }
    else if(n == 2){
        printf("%d is prime \n", n);
    }
    else{
        bool prime = true;
        for(int i = 2; i < n-1; i++){
            if((int)n % i == 0){
                printf("%d is not prime \n", n);
                prime = false;
                break;
            }
        }
        if(prime){
            printf("%d is prime \n", n);
        }
    }
    
    long a = 1;
    for(int i = 1; i <= n; i++){
        a = a*i;
    }
    printf("%d! is %li \n", n, a);
    
    printf("prime factors are: ");
    int b = n;
    while(b % 2 == 0){
        printf("%d ", 2);
        b = b/2;
    }
    
    for (int i = 3; i * i <= b; i = i + 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%d ", i);
            b = b / i;
        }
    }
    
    
    return 0;
}
