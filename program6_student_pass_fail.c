
#include <stdio.h>
int checkPass(int m1, int m2, int m3) {
    if (m1 >= 40 && m2 >= 40 && m3 >= 40)
        return 1;
    else
        return 0;
}
int main() {
    int m1, m2, m3;
    float avg;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    avg = (m1 + m2 + m3) / 3.0;
    if (checkPass(m1, m2, m3))
        printf("Average = %.2f \nResult: PASS", avg);
    else
        printf("Average = %.2f \nResult: FAIL", avg);
    return 0;
}
