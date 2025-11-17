#include <stdio.h>

int i, j;

void inputAttendance(int a[4][5]) {
    for (i = 0; i < 4; i++) {
        printf("Enter attendance for Student %d:\n", i);
        for (j = 0; j < 5; j++) {
            printf("Class %d (1/0): ", j);
            scanf("%d", &a[i][j]);
        }
    }
}

void calculatePercentage(int a[4][5], float p[4]) {
    int count;
    for (i = 0; i < 4; i++) {
        count = 0;
        for (j = 0; j < 5; j++) {
            if (a[i][j] == 1) count++;
        }
        p[i] = (count / 5.0f) * 100.0f;
    }
}

int main() {
    int att[4][5];
    float per[4];

    inputAttendance(att);
    calculatePercentage(att, per);

    for (i = 0; i < 4; i++) {
        printf("Student %d: %.2f%%\n", i, per[i]);
        if (per[i] < 75.0f) {
            printf("Warning: Attendance below 75%%\n");
        }
    }

    return 0;
}



