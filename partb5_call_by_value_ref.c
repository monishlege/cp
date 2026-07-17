
#include <stdio.h>
void simulateSwap(float a, float b) {
    float temp;
    temp = a;
    a = b;
    b = temp;
    printf("After simulation (Call by Value): %.2f %.2f \n", a, b);
}
void actualSwap(float *a, float *b) {
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    float c1, c2;
    printf("Enter two currency values: ");
    scanf("%f %f", &c1, &c2);
    printf("Before swap: %.2f %.2f \n", c1, c2);
    simulateSwap(c1, c2);
    actualSwap(&c1, &c2);
    printf("After actual swap (Call by Reference): %.2f %.2f \n", c1, c2);
    return 0;
}
