
#include"contact.h"



void initcontact(struct CONTACT* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}
void menu()
{
	printf("****0.EXIT*********1.ADD***********\n");
	printf("****2.DEL**********3.SEARCH********\n");
	printf("****4.SORT********5.SHOW***********\n");
	printf("****6.MODIFY***********************\n");
}
void add(struct CONTACT*ps)
{
	if (ps->size >= MAX_DATA)
	{
		printf("ͨѶ¼�������޷��������\n");
	}
	else
	{
		printf("�������½���ϵ�˵�������");
		scanf("%s", ps->data[ps->size].name);
		printf("�������½���ϵ�˵��Ա�");
		scanf("%s", ps->data[ps->size].sex);
		printf("�������½���ϵ�˵����䣺");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������½���ϵ�˵ĵ绰���룺");
		scanf("%s", ps->data[ps->size].phone);
		printf("�������½���ϵ�˵ĵ�ַ��");
		scanf("%s", ps->data[ps->size].address);
	}
	ps->size++;
	printf("��ӳɹ�\n");
}
void show(const struct CONTACT*ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("%s\t%s\t%s\t%s\t%s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			printf("%s\t%s\t%d\t%s\t%s\n", ps->data[i].name,
				ps->data[i].sex,
				ps->data[i].age,
				ps->data[i].phone,
				ps->data[i].address);
		}
	}
}
int find(const struct CONTACT* ps, const char name[MAX_NAME])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ps->size; i++)
	{
		j = strcmp(ps->data[i].name, name);
		if (j == 0)
		{
			return i;
		}
	}
	return -1;
}
void del(struct CONTACT* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int a = 0;
		char name[MAX_NAME] = { 0 };
		printf("������Ҫɾ������ϵ��������");
		scanf("%s", name);
		a = find(ps, name);
		if (a == -1)
		{
			printf("����ϵ�˲�����\n");
		}
		else
		{
			int i = 0;
			for (i = a; i < ps->size-1; i++)
			{
				ps->data[i] = ps->data[i + 1];
			}
			ps->size--;
		}
		printf("ɾ���ɹ�\n");
	}
}
void search(const struct CONTACT* ps)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ���ҵ���ϵ��������\n");
	scanf("%s", name);
	int a = find(ps, name);
	if (a == -1)
	{
		printf("����ϵ�˲�����\n");
	}
	else
	{
		printf("%s\t%s\t%s\t%s\t%s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("%s\t%s\t%d\t%s\t%s\n", ps->data[a].name,
			ps->data[a].sex,
			ps->data[a].age,
			ps->data[a].phone,
			ps->data[a].address);
	}
}
void modify(struct CONTACT* ps)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸���ϵ��������\n");
	scanf("%s", name);
	int a = find(ps, name);
	if (a == -1)
	{
		printf("����ϵ�˲�����\n");
	}
	else
	{
		printf("�������޸ĺ��������");
		scanf("%s", ps->data[a].name);
		printf("�������޸ĺ���Ա�");
		scanf("%s", ps->data[a].sex);
		printf("�������޸ĺ�����䣺");
		scanf("%d", &(ps->data[a].age));
		printf("�������޸ĺ�ĵ绰��");
		scanf("%s", ps->data[a].phone);
		printf("�������޸ĺ�ĵ�ַ��");
		scanf("%s", ps->data[a].address);
	}
	printf("�޸ĳɹ�\n");
}
void sort(struct CONTACT* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		for (i = 0; i < ps->size - 1; i++)
		{
			int j = strcmp(ps->data[i].name, ps->data[i + 1].name);
			if (j>0)
			{
				struct PEOINFO people;
				people = ps->data[i + 1];
				ps->data[i + 1] = ps->data[i];
				ps->data[i] = people;
			}
		}
	}
	printf("����ɹ�\n");
}