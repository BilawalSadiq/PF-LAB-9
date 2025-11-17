#include <stdio.h>

int i, j;

int main() {
    int a[3][4];
    int x;
    int found = 0;

    printf("Enter 12 elements:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter element to search: ");
    scanf("%d", &x);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            if (*(*(a + i) + j) == x) {
                printf("Found at row %d column %d\n", i, j);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("Element not found\n");
    }

    return 0;
}



