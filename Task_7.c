#include <stdio.h>

int i, j;

void inputRuns(int *r) {
    for (i = 0; i < 11; i++) {
        printf("Enter runs for player %d: ", i);
        scanf("%d", r + i);
    }
}

int totalRuns(int *r) {
    int sum = 0;
    for (i = 0; i < 11; i++) {
        sum += *(r + i);
    }
    return sum;
}

float averageRuns(int *r) {
    int sum = totalRuns(r);
    return sum / 11.0f;
}

int highestIndex(int *r) {
    int max = *r;
    int idx = 0;
    for (i = 1; i < 11; i++) {
        if (*(r + i) > max) {
            max = *(r + i);
            idx = i;
        }
    }
    return idx;
}

int main() {
    int runs[11];
    int total;
    float avg;
    int hi;

    inputRuns(runs);
    total = totalRuns(runs);
    avg = averageRuns(runs);
    hi = highestIndex(runs);

    printf("Total Runs: %d\n", total);
    printf("Average Runs: %.2f\n", avg);
    printf("Highest Scorer: Player %d with %d runs\n", hi, runs[hi]);

    return 0;
}



