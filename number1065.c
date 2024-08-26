#include <stdio.h>
int main(){
    
    int n,count;
    for(int i = 0;i<5;i++){
        scanf("%d", &n);
        if(!(n&1))
        count++;
    }
    printf("%d valores pares\n",count);

    return 0;
}