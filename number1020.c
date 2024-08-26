#include <stdio.h>
int main(){
        int N;
        scanf("%d",&N);
        int year,month,days,remainder;
        year = N / 365;
        remainder = N % 365;
        printf("%d ano(s)\n",year);
        month = remainder / 30;
        remainder = remainder % 30;
        printf("%d mes(es)\n",month);
        days = remainder / 1;
        printf("%d dia(s)\n",days);
    return 0;
}