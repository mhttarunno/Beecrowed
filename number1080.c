#include <stdio.h>
int main() {
    int n,p,a=0;
    for(int i=1;i<=100;i++){
        scanf("%d", &n);
        if(n > a){
            a=n;
            p=i;
        }
    }
    printf("%d\n%d\n",a,p);

    return 0;
}