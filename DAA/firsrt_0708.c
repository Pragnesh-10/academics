#include <stdio.h>

int main() {
    int x, n, i;
    long long sum = 1;
    long long term = 1;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        term = term * x;
        sum = sum + term;
    }

    printf("Sum of the series = %lld\n", sum);

    return 0;
}