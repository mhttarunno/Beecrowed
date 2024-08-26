#include <stdio.h>
int main() {
    float R;
    double pi = 3.14159,volume;
    scanf("%f", &R);
    volume = (4.0/3) * pi * R * R * R;
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
