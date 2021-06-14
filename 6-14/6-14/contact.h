#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_PHONE 11
#define MAX_ADDRESS 20
//通讯录所能存放的最大联系人个数
#define MAX_DATA 1000










void menu();
enum
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	SORT,
	SHOW,
	MODIFY
};
struct PEOINFO
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char phone[MAX_PHONE];
	char address[MAX_ADDRESS];
};
struct CONTACT
{
	struct PEOINFO data[MAX_DATA];
	int size;
};
//初始化通讯录
void initcontact(struct CONTACT*ps);
//新建一个联系人
void add(struct CONTACT*ps);
//显示联系人的信息
void show(const struct CONTACT*ps);
//删除一个联系人
void del(struct CONTACT* ps);
//查找指定联系人
void search(const struct CONTACT* ps);
//修改指定联系人的信息
void modify(struct CONTACT* ps);
//对通讯录的信息进行排序
void sort(struct CONTACT* ps);