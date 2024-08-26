#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    printf("%d\n",N);
    int taka100 = N / 100;
    printf("%d nota(s) de R$ 100,00\n",taka100);
    int x;
    x = N % 100;
    int taka50 = x / 50;
    printf("%d nota(s) de R$ 50,00\n",taka50);
    x = x % 50;
    int taka20 = x / 20;
    printf("%d nota(s) de R$ 20,00\n",taka20);
    x = x % 20;
    int taka10 = x / 10;
    printf("%d nota(s) de R$ 10,00\n",taka10);
    x = x % 10;
    int taka5 = x / 5;
    printf("%d nota(s) de R$ 5,00\n",taka5);
    x = x % 5;
    int taka2 = x / 2;
    printf("%d nota(s) de R$ 2,00\n",taka2);
    x = x % 2;
    int taka1 = x / 1;
    printf("%d nota(s) de R$ 1,00\n",taka1);
    
    return 0;
}