#include <stdio.h>
int main(){
    double N;
    scanf("%lf",&N);
    N = N * 100;
    int integerV = N;
    printf("NOTAS:\n");
    int n100,n50,n20,n10,n5,n2,remainder,p1,p50, p25, p10, p5, p01;
    
    n100 = integerV / 10000;
    remainder = integerV % 10000;
    printf("%d nota(s) de R$ 100.00\n",n100);
    n50 = remainder / 5000;
    remainder = remainder % 5000;
    printf("%d nota(s) de R$ 50.00\n",n50);
    n20 = remainder / 2000;
    remainder = remainder % 2000;
    printf("%d nota(s) de R$ 20.00\n",n20);
    n10 = remainder / 1000;
    remainder = remainder % 1000;
    printf("%d nota(s) de R$ 10.00\n",n10);
    n5 = remainder / 500;
    remainder = remainder % 500;
    printf("%d nota(s) de R$ 5.00\n",n5);
    n2 = remainder / 200;
    remainder = remainder % 200;
    printf("%d nota(s) de R$ 2.00\n",n2);

    printf("MOEDAS:\n");
    
    p1 = remainder / 100;
    remainder = remainder % 100;
    printf("%d moeda(s) de R$ 1.00\n",p1);
    p50 = remainder / 50;
    remainder = remainder % 50;
    printf("%d moeda(s) de R$ 0.50\n",p50);
    p25 = remainder / 25;
    remainder = remainder % 25;
    printf("%d moeda(s) de R$ 0.25\n",p25);
    p10 = remainder / 10;
    remainder = remainder % 10;
    printf("%d moeda(s) de R$ 0.10\n",p10);
    p5 = remainder / 5;
    remainder = remainder % 5;
    printf("%d moeda(s) de R$ 0.05\n",p5);
    p01 = remainder / 1;
    remainder = remainder % 1;
    printf("%d moeda(s) de R$ 0.01\n",p01);

    return 0;
}