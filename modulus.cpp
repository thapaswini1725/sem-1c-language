#include <stdio.h>
#include <math.h>

int main() {
    int x, y, M;
    scanf("%d %d %d", &x, &y, &M);

    // Calculate x^y
    long long power = (long long)pow(x, y);

    // Calculate modulo
    int result = power % M;

    printf("%d\n", result);

    return 0;
}
