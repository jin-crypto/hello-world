#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	
	char a[20] = "abcdef";
	char b[] = "hellow";
	/*strlen(a);//strlen             ���ַ����ĳ��ȵ�  ����/0����������ֵΪ�޷������Σ�
	printf("%s \n", a);
	return 0;*/
	/*strcpy(a, b);*/ // strcpy      ��Դ�ַ���������Ŀ��ռ䣬Ŀ��ռ�������㹻��Ŀռ䣻Դ�ַ���������/0������
	/*strcat(a, b);*/  //strcat            ��Դ�ַ���������Ŀ��ռ�ĺ��棬Դ�ַ���������/0������
	/*int num = strcmp(a, b); // strcmy          �ӵ�һ���ַ���ʼ�Ƚ�ASCII�룬ֱ�����ֲ�ͬ���ַ�����ǰһ���ַ����󣬷���һ��>0������
	//��һ���ַ��󣬷���һ��<0��������ȷ���0��
	if (num < 0)
	{
		printf("a<b \n");

	}
	else if (num>0)
	{
		printf("a>b \n");
	}
	else
	{
		printf("a=b");
	}*/
	/*printf("%s", a);*/
	/*char a[20] = "abcdef";*/
	/*strcat(a, a);*/  //�����Լ����Լ�׷�ӣ�

	//strstr�ַ������Һ��������ַ���2���ַ���1�г��֣��򷵻��ַ���2���ַ����е�һ�γ��ֵĵ�ַ��
	//���ַ���2���ַ���1��û�г��֣��򷵻�NULL��
	/*char str[] = "This is a simple string";
	char * pch;
	pch = strstr(str, "simple");
	strncpy(pch, "sample", 6);
	puts(str);
	return 0;*/
	
	//strtok�ַ����ָ��
	//���ַ���1��Ѱ���ַ���2�еķָ��������ǣ��������ַ�����/0��β������ָ��ñ�ǵ�ָ�룻
	//��strtok�ĵ�һ��������ΪNULL����Ѱ�ҵ�һ����ǣ�����һ������ΪNULL����Ѱ����һ����ǣ����ַ����в�������ı�ǣ��򷵻�NULL��
	/*char a[] = "2914751233@qq.com";
	char*str = strtok(a, "@,.");
	while (str != NULL)
	{
		printf("%s\n", str);
		str=strtok(NULL, "@,.");
	}
	return 0;*/
	/*memcpy(a, b, 3);
	printf("%s", a);*/
	//��Դͷ�����N���ֽڵ�Ŀ��ռ䣬����/0Ҳ��ֹͣ��ֱ���ﵽN���ֽڣ�
	//��Դͷ��Ŀ������ص�ʱ�������δ����ģ�
	//memmove��������Դ�ڴ���Ŀ���ڴ���ص���
}





