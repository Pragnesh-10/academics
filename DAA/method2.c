#include <stdio.h>
#include <math.h>

int main() {
    int x, n, i;
    long long sum = 0;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        sum = sum + pow(x, i);
    }

    printf("Sum of the series = %lld\n", sum);

    return 0;
}