#include<stdio.h>
//ʹ��forѭ��ʵ��: ����16���������4*4�ľ��������Сֵ��������λ�á����ж����Сֵ�򱨸��״γ��ֵ�λ�á�
#define N 4
int main() {
	int a[N][N], mini, minj, i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &a[i][j]);
	mini = minj = 0;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			if (a[i][j] < a[mini][minj]) {
				mini = i;
				minj = j;
			}
	printf("��%d�е�%d��\n%d", mini, minj, a[mini][minj]);
}
