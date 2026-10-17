#include <stdio.h>

int engKatta(int a[3][3]) {
    int max = a[0][0];
    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 3; k++) {
            if (a[i][k] > max) {
                max = a[i][k];
            }
        }
    }
    return max;
}

int main() {
    int massiv[3][3];

    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 3; k++) {
            scanf("%d", &massiv[i][k]);
        }
    }

    printf("Matritsa:\n");
    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 3; k++) {
            printf("%d ", massiv[i][k]);
        }
        printf("\n");
    }

    printf("Eng katta element: %d\n", engKatta(massiv));

    for (int i = 0; i < 3; i++) {
        int yigindi = 0;
        for (int k = 0; k < 3; k++) {
            yigindi += massiv[i][k];
        }
        printf("%d-satr yig'indisi: %d\n", i + 1, yigindi);
    }
}