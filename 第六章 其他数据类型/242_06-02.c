//����һ���ṹ������STUDENT������5����Ա��ѧ�š���������ѧ��Ӣ��ͼ������ѧ�ź���������Ϊ�ַ��������ͣ�
//���ųɼ�����Ϊ���ͣ�������һ���ṹ������������3λѧ������Ϣ�������������ǵ�ѧ�š���������ѧ��Ӣ��ͼ�����ɼ���
//���б���ʽ���3λѧ����ѧ�š���������ѧ��Ӣ��������ƽ���ɼ�(������λС��)��
#include<stdio.h>
struct STUDENT
{
	char num[100];
	char name [100];
	int math;
	int eng;
	int com;
	float ave;
}stu[3];
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%s%s%d%d%d",stu[i].num,stu[i].name,&stu[i].math,&stu[i].eng,&stu[i].com);
		stu[i].ave=(stu[i].math+stu[i].eng+stu[i].com)/3.0;
	}
	for(i=0;i<3;i++)
	printf("%s\t%s\t%d\t%d\t%d\t%.2f\n",stu[i].num,stu[i].name,stu[i].math,stu[i].eng,stu[i].com,stu[i].ave);
}