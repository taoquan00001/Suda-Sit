#include<stdio.h>
//������������a��b��c�������ǽ�������a��ֵ��b��b��ֵ��c��c��ֵ��a�������a��b��c��
int main()
{
	int a,b,c,t;
	scanf("a=%d b=%d c=%d",&a,&b,&c);
	t=b;
	b=a;
	a=c;
	c=t;
	printf("a=%d b=%d c=%d",a,b,c);
}

