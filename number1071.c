#include <stdio.h>
int main() {
    int a, n, m, temp, sum = 0;
    scanf("%d %d", &n, &m);
    
    if (n > m) {
        temp = m;
        m = n;
        n = temp;
    }
    if (n % 2 == 0) {
        a = n + 1;
    } else {
        a = n + 2;
    }
    for (int i = a; i < m; i += 2) {
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}