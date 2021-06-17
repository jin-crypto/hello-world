#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	
	char a[20] = "abcdef";
	char b[] = "hellow";
	/*strlen(a);//strlen             求字符串的长度到  遇到/0结束，返回值为无符号整形；
	printf("%s \n", a);
	return 0;*/
	/*strcpy(a, b);*/ // strcpy      将源字符串拷贝到目标空间，目标空间必须有足够大的空间；源字符串必须以/0结束；
	/*strcat(a, b);*/  //strcat            将源字符串拷贝到目标空间的后面，源字符串必须以/0结束；
	/*int num = strcmp(a, b); // strcmy          从第一个字符开始比较ASCII码，直到出现不同的字符，若前一个字符串大，返回一个>0的数；
	//后一个字符大，返回一个<0的数；相等返回0；
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
	/*strcat(a, a);*/  //不能自己给自己追加；

	//strstr字符串查找函数，若字符串2在字符串1中出现，则返回字符串2在字符串中第一次出现的地址；
	//若字符串2在字符串1中没有出现，则返回NULL；
	/*char str[] = "This is a simple string";
	char * pch;
	pch = strstr(str, "simple");
	strncpy(pch, "sample", 6);
	puts(str);
	return 0;*/
	
	//strtok字符串分割函数
	//在字符串1中寻找字符串2中的分割符，做标记，并将该字符串用/0结尾，返回指向该标记的指针；
	//若strtok的第一个参数不为NULL，则寻找第一个标记，若第一个参数为NULL，则寻找下一个标记；若字符串中不含更多的标记，则返回NULL；
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
	//从源头向后复制N个字节到目标空间，遇到/0也不停止，直到达到N个字节；
	//当源头和目标出现重叠时，结果是未定义的；
	//memmove用来处理源内存块和目标内存块重叠；
}





