#include <stdio.h>
int main() {
    int code1, unit1, code2, unit2;
    double price1, price2, TOTAL;
    scanf("%d %d %lf %d %d %lf", &code1, &unit1, &price1, &code2, &unit2, &price2);
    TOTAL = ((unit1 * price1) + (unit2 * price2));
    printf("VALOR OF PAGAR: R$ %.2lf\n", TOTAL);
    return 0;
}