#include <stdio.h>
int main() {
    double A, B, C, AreaTri, AreaCir, AreaTrap, AreaSqr, AreaRec, pi= 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);
    
    AreaTri = 0.5 * A * C;
    AreaCir = pi * (C * C);
    AreaTrap = 0.5 * (A + B) * C;
    AreaSqr = (B * B);
    AreaRec = (A * B);
    
    printf("TRIANGULO: %.3lf\n",AreaTri);
    printf("CIRCULO: %.3lf\n",AreaCir);
    printf("TRAPEZIO: %.3lf\n",AreaTrap);
    printf("QUADRADO: %.3lf\n",AreaSqr);
    printf("RETANGULO: %.3lf\n",AreaRec);
    
    return 0;
}