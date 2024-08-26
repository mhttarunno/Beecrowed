#include <stdio.h>
int main() {
    int n;
    float a,b,c, total;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%f %f %f", &a, &b, &c);
        total = (a*2.0 + b*3 + c*5)/10;
        printf("%.1f\n", total);
    }
    return 0;
}