#include<stdio.h>
//ʹ��forѭ������10����������һά����a�У�������ǵ�ƽ��ֵ(������λС��)��
//�Լ�����ƽ��ֵ�����ݣ�ÿ�����ݺ��һ���ո񣩼�������С��ƽ��ֵ�����ݣ�ÿ�����ݺ��һ���ո񣩼�������
#define N 10
int main()
{
	int a[N],i,big=0,sum=0,small=0;
	double avg;
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<N;i++)
	sum=sum+a[i];
	avg=sum/10.0;
	printf("ƽ��ֵ=%.2f\n",avg);
	
	printf("����ƽ��ֵ��������");
	for(i=0;i<N;i++)	
	if(a[i]>avg)	
	{
			big++;
		printf("%d ",a[i]);		
	}				
	printf("��%d��\n",big);
	
	printf("С��ƽ��ֵ��������");
	for(i=0;i<N;i++)	
	if(a[i]<avg)	
	{
			small++;
		printf("%d ",a[i]);		
	}				
		printf("��%d��",small);		
}
