
//#include<stdio.h>
//�����ṹ��
//�����ṹ������ͻ�����ͬ
//struct
//{
//	char name[10];
//	float score;
//	int age;
//}stu;
//struct
//{
//	char name[10];
//	float score;
//	int age;
//}*p;


//�ṹ��Ƕ�ױ���ķ�������ָ�룩��
//struct stu
//{
//	char name[10];
//	float score;
//	int age;
//	struct stu* next;
//};
//typedef struct 
//{
//	char name[10];
//	stu s;
//}stu;
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//typedef struct stu
//{
//	char name[10];
//	struct stu* s;
//};
/*#pragma pack(1)*///�Զ�������� 1
//struct stu
//{
//	char c1;
//	int a;
//	char c2;
//}a;
/*#pragma pack()*///���������ָ�Ĭ��

//�ṹ���С�ļ���
//��һ����Ա�ڽṹ�����ƫ����Ϊ0�ĵ�ַ��
//���������ڶ��������������ĵ�ַ��(������Ϊ������Ĭ�϶������ͳ�Ա��С�Ľ�Сֵ��
//�ṹ������Ĵ�СΪ����������ÿ����Ա����һ������������������


//Ϊ��ʹ�ṹ�御��С��ͨ����ռ�ÿռ�С�ĳ�Ա������һ��

//int main()
//{
//	printf("%d", sizeof(a));
//	/*struct stu s = { "����", 23.5, 14 };
//	struct stu t = { "����", 34.5, 15,&s };*/
//	/*printf("%d", sizeof(stu));*/
//	return 0;
//}
//���ڿռ�����ԭ��
//1,����ֲ�ԣ�ĳЩƽֻ̨�����ض���λ�ô�ȡ�ض����͵����ݣ�
//2��������ܣ�




//�ṹ�崫��
//void print1(struct stu q)
//{
//	printf("%s", q.name);
//}


//�ṹ�崫ֵ����
//struct stu
//{
//	char name[10];
//	float score;
//	int age;
//};
//void print1(struct stu q)
//{
//	printf("%s ", q.name);
//}
//int main()
//{
//	struct stu s = { "����", 32.5, 10 };
//	print1(s);
//	/*print2(&s);*/
//	return 0;
//}

//�ṹ��Ĵ�ַ����
//struct stu
//{
//	char name[10];
//	float score;
//	int age;
//};
//void print2(struct stu* p)
//{
//	printf("%s ", p->name);
//}
//int main()
//{
//	struct stu s = { "����", 32.5, 10 };
//	print2(&s);
//	return 0;
//}

#include<stdio.h>
//λ�Σ�λ�β���ƽ̨��
//λ�εĳ�Ա���������μ���
//λ�εĳ�Ա������Ҫ��һ��ð�ź�һ������

//��ṹ����ȣ�λ�θ���ʡ�ռ䣻



//λ�ε��ڴ����
//1,λ�γ�Ա���������Ϊ�ó�Առ�ö�����λ����Ŀ��
//2,���ݳ�Ա���Ϳ��ٿռ䣨����int���ͣ�һ�ο���4���ֽڣ������ٵĿռ�����
//ʣ��ı���λ������һ��Աʹ�ã������ٴο��ٿռ䣬�ϴο��ٵ�ʣ��ռ䲻��ʹ�ã�
//3�����ݳ�Առ�õĶ�����λΪ��Ա����ռ䣨����ռ�ķ����ɱ�����������
//4�����ٵ����ֽڴ�С��Ϊλ�εĴ�С��


//struct A
//{
//	int a : 2;
//	int b : 3;
//};
//int main()
//{
//	struct A a;
//	printf("%d", sizeof(a));
//	return 0;
//}


//ö������
//enum color
//{
//	red,
//	green,
//	blue
//};
//int main()
//{
//	enum color clr = 4;
//	printf("%d ", green);
//	return 0;
//}
//ö�ٵ��ŵ㣺
//1������һ�ζ�����������
//2����#define��ȣ�ö�����͸�����ά���� 



//�����壨�������ͣ�
//��Ա����ͬһ��ռ�

//union stu
//{
//	int a;
//	char b;
//};
//
//int main()
//{
//	union stu s;
//	s.a = 1;
//	printf("%d", s.b);
//	return 0;
//}

//������Ĵ�С
//����������Ա�Ĵ�С��������Ա�Ĵ�С������������������������������Ĵ�СӦΪ������������������
//�����Ա�Ķ�����Ϊ�����Ա���͵Ĵ�С��Ĭ�϶������Ľ�Сֵ��



//���������жϱ����ڵ��ֽ���
//union
//{
//	int a;
//	char b;
//}u;
//int check()
//{
//	u.a = 1;
//	return u.b;
//}
//int main()
//{
//	int c = check();
//	if (1 == c)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//}






