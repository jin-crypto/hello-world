
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<errno.h>
struct S
{
	float f;
	int i;
	char arr[10];
};

int main()
{
	//fputc的使用
	/*FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		return 0;
	}
	fputc('c', pf);
	fclose(pf);
	pf = NULL;
	return 0;*/


	//fgetc的使用
	/*FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
	return 0;
	}
	int ch = fgetc(pf);
	printf("%c", ch);
	fclose(pf);
	pf = NULL;
	return 0;*/




	//fputs的使用
	/*FILE* pf = fopen("test.txt", "w");
	fputs("hellow bit", pf);
	fclose(pf);
	pf = NULL;


	//fgets的使用
	char arr[1024] = { 0 };
	FILE* p = fopen("test.txt", "r");
	fgets(arr, 1024, p);
	printf("%s", arr);
	fclose(p);
	pf = NULL;
	return 0;*/


	/*fprintf的使用*/
	/*struct S s = { 1.5, 2 };
	FILE* pf = fopen("test.txt", "w");
	fprintf(pf, "%f,%d", s.f, s.i);
	fclose(pf);
	pf = NULL;
	return 0;*/


	//fscanf的使用
	/*struct S s = { 0 };
	FILE* pf = fopen("test.txt", "r");
	fscanf(pf, "%f%d%s", &(s.f), &(s.i), s.arr);
	printf("%f %d %s ", s.f, s.i, s.arr);
	fclose(pf);
	pf = NULL;
*/


	//sprintf的使用
	/*struct S s = { 1.5f, 2,"abcdef" };
	char buf[1024] = { 0 };
	struct S temp = { 0 };
	FILE* pf = fopen("test.txt", "r");
	sprintf(buf, "%f%d%s", s.f, s.i, s.arr);
	printf("%s", buf);


	//sscanf的使用
	sscanf(buf, "%f,%d,%s", &(temp.f), &(temp.i),temp.arr);
	printf("%f %d %s ", temp.f,temp.i,temp.arr);
	fclose(pf);
	pf = NULL;
	return 0;*/


	//fwrite的使用
	/*FILE*pf = fopen("test.txt", "wb");
	struct S s = { 53.5, 5, "abcd" };
	fwrite(&s, sizeof(struct S), 1, pf);
	return 0;*/


	//fread的使用
	/*struct S temp = { 0 };
	FILE*pf = fopen("test.txt", "rb");
	fread(&temp, sizeof(struct S), 1, pf);
	printf("%f %d %s", temp.f, temp.i, temp.arr);
	fclose(pf);
	pf = NULL;
	return 0;*/


	//fseek的使用
	/*FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	fseek(pf, 2, SEEK_CUR);
	int ch = fgetc(pf);
	printf("%c", ch);
	fclose(pf);
	pf = NULL;
	return 0;*/



	//ftell的使用
	/*FILE*pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	fgetc(pf);
	fgetc(pf);
	long a =ftell(pf);
	printf("%ld", a);
	fclose(pf);
	pf = NULL;
	return 0;*/



    //rewind的使用
   /* FILE*pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	fgetc(pf);
	fgetc(pf);
	int a = ftell(pf);
	printf("%d", a);
	rewind(pf);
	a = ftell(pf);
	printf("%d", a);
	fclose(pf);
	pf = NULL;
	return 0;*/



    //ferror的使用
    //feof的使用 
   /* int c = 0;
    FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	while (( c = fgetc(pf)) != EOF)
	{
		printf("%c", c);
	}
	if (ferror(pf))
	{
		printf("error");
	}
	else if (feof(pf))
	{
		printf("en of file");
	}*/
	/*fclose(pf);
	pf = NULL;
	return 0*/;



	//perror的使用
	/*FILE* pf = fopen("test2.txt", "r");
	if (!pf)
	{
		perror("opem the file");
		return 0;
	}
	fclose(pf);
	pf == NULL;
	return 0;
*/
}











