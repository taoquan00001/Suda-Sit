#include<stdio.h>
#include<string.h>
//ʹ�ú���scanf("%s",�ַ���ַ)����һ������С��100���ַ�����
//ͳ�����д�д��ĸ��Сд��ĸ�������Լ������ַ��ĸ�����
int main() {
	char s1[100];
	int big = 0, sm = 0, di = 0, el = 0, i, j;
	scanf("%s", s1);

	for (i = 0; s1[i]; i++) {
		if (s1[i] >= 'A' && s1[i] <= 'Z')
			big++;
		else if (s1[i] >= 'a' && s1[i] <= 'z')
			sm++;
		else if (s1[i] >= '0' && s1[i] <= '9')
			di++;
		else
			el++;
	}

	printf("��д%d��\nСд%d��\n����%d��\n����%d��", big, sm, di, el);
}
