#include<stdio.h>
//ʹ��forѭ������10����������һά����a�У�����ָ�����Ƿ���ڣ���������ڡ��򡰲����ڡ�����
#define N 10 
int main()
{

	int i,a[N],t=0,n;
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);	
	scanf("%d",&n);
		
	for(i=0;i<N;i++)
		{	
		 if(n==a[i])
		  t=1;	 		 	 			      
 	 	}
	if(t==1)
		 printf("����"); 
	 else
	 	 printf("������");	 
}
