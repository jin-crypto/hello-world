

#define _CRT_SECURE_NO_WARNINGS 1


#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{

	//malloc的使用
	//int num = 0;
	//int i = 0;
	////scanf("%d", &num);
	//int* p = (int*)malloc(INT_MAX);
	//if (p == NULL)
	//{
	//	printf("%s",strerror(errno));
	//	return 0;
	//}
	//else
	//{
	//	for (i = 0; i < num; i++)
	//	{
	//		*(p + i) = i;
	//	}
	//	for (i = 0; i < num; i++)
	//	{
	//		printf("%d ", *(p + i));
	//	}
	//}
	//free(p);
	//p = NULL;
	//return 0;



	//calloc的使用
	/*int num = 0;
	scanf("%d", &num);*/
	/*int* p= (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d %d ", *(p + i),i);
		}
	}
	free(p);
	p = NULL;
	return 0;*/
	/*int*p = calloc(10, sizeof(int));
	if (p==)*/



	//realloc的使用
	/*int* p = calloc(5, sizeof(int));
	if (p == NULL)
	{
		return 0;
	}
	int* ptr = realloc(p, 40);
	if (ptr != NULL)
	{
		p = ptr;
	}
	free(p);
	p = NULL;
	ptr = NULL;
	return 0;*/
}

