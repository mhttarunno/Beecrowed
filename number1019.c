#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int hours, minitues, seconds, remainder;
    hours = N / 3600;
    remainder = N % 3600;
    minitues = remainder / 60;
    remainder = remainder % 60;
    seconds = remainder / 1;
    printf("%d:%d:%d",hours,minitues,seconds);
    return 0;
}