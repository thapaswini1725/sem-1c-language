#include <stdio.h>

int main() {
    double CP, SP;
    scanf("%lf %lf", &CP, &SP);

    double profit = SP - CP;
    double profitPercentage = (profit / CP) * 100.0;

    printf("%.2lf\n", profitPercentage);

    return 0;
}
