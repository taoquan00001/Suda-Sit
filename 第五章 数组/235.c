#include<stdio.h>
#include<string.h>
//ʹ�ú���gets����һ������С��100���ַ�����ͳ������Ӣ����ĸ��
//�����Լ������ַ��ĸ�����
int main() {
	char s1[100];
	int en = 0, sm = 0, di = 0, el = 0, i, j;
	gets(s1);

	for (i = 0; s1[i]; i++) {
		if (s1[i] >= 'A' && s1[i] <= 'z')
			en++;
		else if (s1[i] >= '0' && s1[i] <= '9')
			di++;
		else
			el++;
	}

	printf("��ĸ%d��\n����%d��\n����%d��", en, di, el);
}
