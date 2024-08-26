#include <stdio.h>
int main(){
    
    float avg,a,b;
    int count = 0;
    for(int i = 0;i<6;i++){
        scanf("%f",&a);
        if(a>0){
        b += a;
        count++;
    }
}
    avg = b / count;
    printf("%d valores positivos\n%.1f\n",count,avg);
    return 0;
}