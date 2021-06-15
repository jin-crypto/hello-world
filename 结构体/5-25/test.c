
//#include<stdio.h>
//匿名结构体
//匿名结构体的类型互不相同
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


//结构体嵌套本身的方法（用指针）；
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
/*#pragma pack(1)*///自定义对齐数 1
//struct stu
//{
//	char c1;
//	int a;
//	char c2;
//}a;
/*#pragma pack()*///将对齐数恢复默认

//结构体大小的计算
//第一个成员在结构体变量偏移量为0的地址处
//其他变量在对齐数的整数倍的地址处(对齐数为编译器默认对齐数和成员大小的较小值）
//结构体整体的大小为最大对齐数（每个成员都有一个对齐数）的整数倍


//为了使结构体尽量小，通常将占用空间小的成员集中在一起

//int main()
//{
//	printf("%d", sizeof(a));
//	/*struct stu s = { "李四", 23.5, 14 };
//	struct stu t = { "张三", 34.5, 15,&s };*/
//	/*printf("%d", sizeof(stu));*/
//	return 0;
//}
//存在空间对齐的原因：
//1,可移植性：某些平台只能在特定的位置处取特定类型的数据；
//2，提高性能：




//结构体传参
//void print1(struct stu q)
//{
//	printf("%s", q.name);
//}


//结构体传值调用
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
//	struct stu s = { "张三", 32.5, 10 };
//	print1(s);
//	/*print2(&s);*/
//	return 0;
//}

//结构体的传址调用
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
//	struct stu s = { "张三", 32.5, 10 };
//	print2(&s);
//	return 0;
//}

#include<stdio.h>
//位段（位段不跨平台）
//位段的成员必须是整形家族
//位段的成员名后面要加一个冒号和一个数字

//与结构体相比，位段更节省空间；



//位段的内存分配
//1,位段成员后面的数字为该成员占用二进制位的数目；
//2,根据成员类型开辟空间（若是int类型，一次开辟4个字节，若开辟的空间分配后，
//剩余的比特位不够下一成员使用，则需再次开辟空间，上次开辟的剩余空间不再使用）
//3，根据成员占用的二进制位为成员分配空间（分配空间的方向由编译器决定）
//4，开辟的总字节大小即为位段的大小；


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


//枚举类型
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
//枚举的优点：
//1，可以一次定义多个常量；
//2，与#define相比，枚举类型更容易维护； 



//共用体（联合类型）
//成员共用同一块空间

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

//共用体的大小
//最少是最大成员的大小，若最大成员的大小不是最大对齐数的整数倍，则联合体的大小应为最大对齐数的整数倍；
//数组成员的对齐数为数组成员类型的大小与默认对齐数的较小值；



//用联合体判断编译期的字节序
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
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//}






