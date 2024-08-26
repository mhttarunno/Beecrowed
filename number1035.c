#include <stdio.h>
int main (){
    int A, B, C, D, x, y;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    x = C + D;
    y = A + B;
    if(B > C && D > A && x > y && C > 0 && D > 0 && A % 2 == 0 ){
        printf("Valores aceitos\n");
        }
        else{
            printf("Valores nao aceitos\n");
        }
        
    return 0;
}