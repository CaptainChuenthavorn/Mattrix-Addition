#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int matrixA[100][100], matrixB[100][100], m, n, count, a, b;
	printf("Enter column x row : ");
	scanf("%d %d", &m, &n);
	printf("Enter Matrix A : \n");
	for (a = 0;a < m;a++) {
		for (b = 0;b < n;b++) {
			scanf("%d", &matrixA[a][b]);
		}
	}
	printf("Enter Matrix B : \n");
	for (a = 0;a < m;a++) {
		for (b = 0;b < n;b++) {
			scanf("%d", &matrixB[a][b]);
		}
	}
	printf("The addition of matrix A + matrix B is :\n");
	for (a = 0;a < m;a++) {
		for (b = 0;b < n;b++) {
			printf("%d ", matrixA[a][b] + matrixB[a][b]);
		}
		printf("\n");
	}
	return 0;
}