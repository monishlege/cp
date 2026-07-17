
#include <stdio.h>
void swap(float *a, float *b) {
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    float bal1, bal2;
    printf("Enter two account balances: ");
    scanf("%f %f", &bal1, &bal2);
    printf("Before swapping: \n");
    printf("Balance 1 = %.2f \nBalance 2 = %.2f \n", bal1, bal2);
    swap(&bal1, &bal2);
    printf("After swapping: \n");
    printf("Balance 1 = %.2f \nBalance 2 = %.2f \n", bal1, bal2);
    return 0;
}
