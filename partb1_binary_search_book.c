
#include <stdio.h>
int main() {
    int a[50], n, key, low, high, mid, i;
    printf("Enter number of books: ");
    scanf("%d", &n);
    printf("Enter Book IDs in ascending order: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter Book ID to search: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) {
            printf("Book ID %d is AVAILABLE in the shelf", key);
            return 0;
        }
        else if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    printf("Book ID %d is NOT AVAILABLE in the shelf", key);
    return 0;
}
