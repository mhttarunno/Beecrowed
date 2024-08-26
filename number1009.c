#include <stdio.h>
#include <string.h>
int main() {
    char name[20];
    gets(name);
    double salary, sales, total;
    scanf("%lf %lf", &salary, &sales);
    total = (salary + 0.15 * sales);
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}