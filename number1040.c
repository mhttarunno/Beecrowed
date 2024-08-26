#include <stdio.h>
int main(){

float a,b,c,d,e, avg1,avg2;
scanf("%f %f %f %f", &a, &b, &c, &d);
a *= 2;
b *= 3;
c *= 4;
d *= 1;

avg1 = (a + b + c + d) / 10;
printf("Media: %.1lf\n",avg1);

if(avg1 >= 5.0 && avg1 <= 6.9){
    printf("Aluno em exame.\n");
    scanf("%f",&e);
    printf("Nota do exame: %.1lf\n", e);
    avg2 = (avg1 + e) / 2;
    if(avg2 >= 5)
        printf("Aluno aprovado.\n");
    else if(avg2 <= 4.9)
        printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",avg2);
}
if(avg1 >= 7.00)
    printf("Aluno aprovado.\n");
if(avg1 < 5.00)
    printf("Aluno reprovado.\n");
    
    return 0;
}