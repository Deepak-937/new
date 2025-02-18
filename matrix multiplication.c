#include <stdio.h>
int main() {
    int r, c, i, j;
    int arr1[100][100], arr2[100][100], prod[100][100];
    printf("Enter the number of rows : ");
    scanf("%d", &r);
    printf("Enter the number of columns ");
    scanf("%d", &c);
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
                for(int k=0;k<c;k++){
                 prod[i][j] += arr1[i][k] * arr2[k][j];
                }
        }
    }

    printf("Matrix multiplication result:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}
