
#include <stdio.h>
int main() {
    int units[10][10], revenue[10];
    int b, p, i, j, total;
    printf("Enter number of branches and products: ");
    scanf("%d %d", &b, &p);
    printf("Enter units shipped (branch - wise):\n");
    for (i = 0; i < b; i++)
        for (j = 0; j < p; j++)
            scanf("%d", &units[i][j]);
    printf("Enter revenue per unit for each product: \n");
    for (j = 0; j < p; j++)
        scanf("%d", &revenue[j]);
    for (i = 0; i < b; i++) {
        total = 0;
        for (j = 0; j < p; j++)
            total += units[i][j] * revenue[j];
        printf("Total revenue of Branch %d = %d \n", i + 1, total);
    }
    return 0;
}
