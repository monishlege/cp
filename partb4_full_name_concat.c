
#include <stdio.h>
int main() {
    char first[20], last[20], full[40];
    int i = 0, j = 0, len = 0;
    printf("Enter first name: ");
    scanf("%s", first);
    printf("Enter last name: ");
    scanf("%s", last);
    while (first[i] != '\0') {
        full[j++] = first[i++];
    }
    full[j++] = ' ';
    i = 0;
    while (last[i] != '\0') {
        full[j++] = last[i++];
    }
    full[j] = '\0';
    i = 0;
    while (full[i] != '\0') {
        len++;
        i++;
    }
    printf("Full Name: %s \n", full);
    printf("Length of Full Name: %d \n", len);
    if (len <= 20)
        printf("Name fits the screen");
    else
        printf("Name does NOT fit the screen");
    return 0;
}
