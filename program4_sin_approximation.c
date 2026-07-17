
#include <stdio.h>
int main() {
    float x, term, sum;
    int n, i;
    printf("Enter value of x (in radians): ");
    scanf("%f", &x);
    term = x;
    sum = x;
    for (i = 1; i <= 5; i++) {
        term = -term * x * x / ((2*i) * (2*i + 1));
        sum = sum + term;
    }
    printf("Approximate value of sin(x) = %.4f", sum);
    return 0;
}
