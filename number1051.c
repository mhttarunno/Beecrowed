#include <stdio.h>
int main(){
    float n;
    scanf("%f", &n);
    if( n >= 0.00 && n <= 2000.0){
        printf("Isento\n");
    }
    else if( n > 2000.01 && n <= 3000.00){
            n -= 2000.01;
            n =(n*8) / 100;
            printf("R$ %.2f\n",n);
    }
    else if( n > 3000.01 && n <= 4500.00){
            n -= 3000.01;
            n = (n*18) / 100;
            printf("R$ %.2f\n", n+80);
    }
    else{
            n -= 4500.00;
            n = (n*28) / 100;
            printf("R$ %.2f\n",n+80+270);
    }
    return 0;
}