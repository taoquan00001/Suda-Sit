#include<stdio.h>
#define N 3
//����3*3�������ÿ��Ԫ��֮��
int main() {
	int a[N][N], sum = 0, i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < N; i++) {
		sum = 0;
		for (j = 0; j < N; j++)
			sum += a[i][j];
		printf("%d ", sum);
	}
}
