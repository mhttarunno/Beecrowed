#include <stdio.h>
int main() {
    int N, t, a=0, b=0;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        scanf("%d", &N);
    if(N>=10 && N<=20)
        a++;
    else
        b++;
    }
    printf("%d in\n",a);
    printf("%d out\n",b);

    return 0;
}