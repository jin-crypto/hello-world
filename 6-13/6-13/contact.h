#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_PHONE 11
#define MAX_ADDRESS 20
//ͨѶ¼���ܴ�ŵ������ϵ�˸���
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
//��ʼ��ͨѶ¼
void initcontact(struct CONTACT*ps);
//�½�һ����ϵ��
void add(struct CONTACT*ps);
//��ʾ��ϵ�˵���Ϣ
void show(const struct CONTACT*ps);
//ɾ��һ����ϵ��
void del(struct CONTACT* ps);
//����ָ����ϵ��
void search(const struct CONTACT* ps);
//�޸�ָ����ϵ�˵���Ϣ
void modify(struct CONTACT* ps);
//��ͨѶ¼����Ϣ��������
void sort(struct CONTACT* ps);