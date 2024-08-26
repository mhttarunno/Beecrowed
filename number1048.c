#include <stdio.h>

int main(){
float a,sal,bon;
int per;
scanf("%f",&a);
    
    if(a >= 0 && a <= 400.00){
        per = 15;
        bon = (per * a) / 100.0;
        sal = a + bon;
    }
    else if(a > 400.01 && a <= 800.00){
        per = 12;
        bon = (per * a) / 100.0;
        sal = a + bon;
    }
    else if(a > 800.01 && a <= 1200.00){
        per = 10;
        bon = (per * a) / 100.0;
        sal = a + bon;
    }
    else if(a > 1200.01 && a <= 2000.00){
        per = 7;
        bon = (per * a) / 100.0;
        sal = a + bon;
    }
    else if(a > 2000){
        per = 4;
        bon = (per * a) / 100.0;
        sal = a + bon;
    }
    printf("Novo salario: %.2f\nReajuste ganho: %.2lf\nEm percentual: %d %\n",sal, bon, per);


    return 0;
}