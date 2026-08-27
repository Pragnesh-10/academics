#include <stdio.h>
#include <math.h>

int main() {
    int x, n;
    long long sum;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (x == 1) {
        sum = n + 1;
    } else {
        sum = (pow(x, n + 1) - 1) / (x - 1);
    }

    printf("Sum of the series = %lld\n", sum);

    return 0;
}