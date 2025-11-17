#include <stdio.h>

int i, j;

void replaceVowels(char a[5][20]) {
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 20; j++) {
            char ch = a[i][j];
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
                a[i][j] = '*';
            }
        }
    }
}

void display(char a[5][20]) {
    for (i = 0; i < 5; i++) {
        printf("%s\n", a[i]);
    }
}

int main() {
    char arr[5][20];
    printf("Enter 5 strings:\n");
    for (i = 0; i < 5; i++) {
        scanf("%s", arr[i]);
    }

    replaceVowels(arr);
    printf("Updated strings:\n");
    display(arr);

    return 0;
}



