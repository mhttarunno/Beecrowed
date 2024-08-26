#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    if(n == 1){
    printf("Total: R$ %.2lf\n",m * 4.0);
    }
    else if(n == 2){
        printf("Total: R$ %.2lf\n",m * 4.50);
    }
    else if(n == 3){
        printf("Total: R$ %.2lf\n",m * 5.00);
    }
    else if(n == 4){
        printf("Total: R$ %.2lf\n",m * 2.00);
    }
    else if(n == 5){
        printf("Total: R$ %.2lf\n",m * 1.50);
    }
    return 0;
}