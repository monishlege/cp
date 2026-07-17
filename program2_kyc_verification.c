
#include <stdio.h>
int main() {
    int kyc[5] = {1111, 2222, 3333, 4444, 5555};
    int id, i, found = 0;
    printf("Enter Unique ID: ");
    scanf("%d", &id);
    for (i = 0; i < 5; i++) {
        if (id == kyc[i]) {
            found = 1;
            break;
        }
    }
    if (found)
        printf("Individual is VERIFIED");
    else
        printf("Individual is NOT VERIFIED");
    return 0;
}
