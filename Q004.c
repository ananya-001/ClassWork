#include <stdio.h>
int main() {
    int m, n, p, q, i, j, k;
    printf("Enter the number of rows for matrix A: ");
    scanf("%d", &m);
    printf("Enter the number of columns for matrix A: ");
    scanf("%d", &n);
    printf("Enter the number of rows for matrix B: ");
    scanf("%d", &p);
    printf("Enter the number of columns for matrix B: ");
    scanf("%d", &q);
    if (n != p) {
        printf("\nMatrix multiplication is not possible. The number of columns of matrix A must be equal to the number of rows of matrix B.\n");
        return 1; 
    }
    int A[m][n];
    int B[p][q];
    int C[m][q]; 
    printf("\nEnter elements of matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter elements of matrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("Enter element B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
   for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) { 
                C[i][j] += A[i][k] * B[k][j]; } }
    }
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);}
        printf("\n");
    }
    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", B[i][j]);}
        printf("\n");
    }
    printf("\nProduct Matrix C (A x B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", C[i][j]);}
    printf("\n");
    }
    return 0; 
}