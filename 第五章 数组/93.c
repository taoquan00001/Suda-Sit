#include<stdio.h>
//ʹ��forѭ������10����������һά����a�У��ҳ����е�����������±�λ�á���С�������±�λ�á���������ͬ���򱨸��״γ��ֵ����������С����
#define N 10 
int main()
{

	int i,a[N],max,min;
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
		max=0;
		min=0;
	for(i=1;i<N;i++)
	{
	
	 if(a[i]>a[max])
	max=i;
	 
    if(a[i]<a[min])
	min=i;		
	  
 	 }
	  printf("�����=%d �±�=%d\n",a[max],max);	
	   printf("��С��=%d �±�=%d",a[min],min);	
}
