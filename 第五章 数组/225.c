#include<stdio.h>
//ʹ��forѭ��ʵ��: ����16���������4*4�ľ���������ֵ��������λ�á����ж�����ֵ�򱨸��״γ��ֵ�λ�á�
#define N 4
int main() {
	int a[N][N], maxi, maxj, i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &a[i][j]);
	maxi = maxj = 0;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			if (a[i][j] > a[maxi][maxj]) {
				maxi = i;
				maxj = j;
			}
	printf("��%d�е�%d��\n%d", maxi, maxj, a[maxi][maxj]);
}
