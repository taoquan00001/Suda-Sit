//����һ���ṹ������STUDENT������5����Ա��ѧ�š���������ѧ��Ӣ��ͼ����
//��ѧ�ź���������Ϊ�ַ��������ͣ����ųɼ�����Ϊ���ͣ���
//����һ���ṹ������������3λѧ������Ϣ�������������ǵ�ѧ�š���������ѧ��Ӣ��
//�ͼ�����ɼ������б���ʽ���3λѧ����ѧ�š���������ѧ��Ӣ��������ƽ���ɼ�
//(������λС��)��
#include <stdio.h>
#include <math.h>
struct SPoint {
	double x;
	double y;
};
int main() {
	int i, n;
	double j = 0.0;
	scanf("%d", &n);
	struct SPoint sp[n];
	for (i = 0; i < n; i++) {
		scanf("%lf %lf", &sp[i].x, &sp[i].y);
	}
	for (i = 0; i < n - 1; i++) {
		j += sqrt((sp[i].x - sp[i + 1].x) * (sp[i].x - sp[i + 1].x) + (sp[i].y - sp[i + 1].y) * (sp[i].y - sp[i + 1].y));
	}
	printf("%.2lf", j);
}
