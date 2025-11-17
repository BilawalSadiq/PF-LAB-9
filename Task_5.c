#include <stdio.h>

void printData(void *ptr, char type) {
    if (type == 'i') {
        printf("%d\n", *(int *)ptr);
    } else if (type == 'f') {
        printf("%.2f\n", *(float *)ptr);
    } else if (type == 'c') {
        printf("%c\n", *(char *)ptr);
    }
}

int main() {
    int productID = 105;
    float price = 49.99;
    char category = 'A';

    printData(&productID, 'i');
    printData(&price, 'f');
    printData(&category, 'c');

    return 0;
}




