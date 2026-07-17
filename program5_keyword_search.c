
#include <stdio.h>
#include <string.h>
int main() {
    char desc[200], key[50];
    printf("Enter course description: ");
    gets(desc);
    printf("Enter keyword to search: ");
    gets(key);
    if (strstr(desc, key) != NULL)
        printf("Keyword '%s' found in the course description.", key);
    else
        printf("Keyword '%s' not found in the course description.", key);
    return 0;
}
