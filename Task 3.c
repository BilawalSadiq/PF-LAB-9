#include <stdio.h>
void replace(int row, int col, char arr[row][col]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == 'a' || arr[i][j] == 'e' || arr[i][j] == 'i' || arr[i][j] == 'o' || arr[i][j] == 'u'){
                arr[i][j] = '*';
            }
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int row, col;
    printf("Enter rows of the array: ");
    scanf("%d", &row);
    printf("Enter col of the array: ");
    scanf("%d", &col);
    char array[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf(" %c", &array[i][j]);
        }
    }
    replace(row,col,array);
}