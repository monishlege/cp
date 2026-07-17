
#include <stdio.h>
struct Book {
    char title[50];
    char author[50];
    int year;
};
int main() {
    struct Book b[10];
    int n, i;
    printf("Enter number of books: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter title, author and year: \n");
        scanf("%s %s %d", b[i].title, b[i].author, &b[i].year);
    }
    printf("\nBook List: \n");
    for (i = 0; i < n; i++) {
        printf("%s %s %d \n", b[i].title, b[i].author, b[i].year);
    }
    return 0;
}
