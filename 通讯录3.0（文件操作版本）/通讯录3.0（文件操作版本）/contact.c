

#include"contact.h"


void checkcontact(struct CONTACT* ps);
void initcontact(struct CONTACT* ps)
{
	ps->data = (struct PEOINFO*)calloc(NUM, sizeof(struct PEOINFO));
	if (ps->data == NULL)
	{
		printf("开辟失败\n");
		return;
	}
	ps->size = 0;
	ps->capacity = NUM;
	FILE*fs = fopen("contact.dat", "rb");
	if (fs == NULL)
	{
		printf("读通讯录：%s\n", strerror(errno));
	}
	else
	{
		struct PEOINFO peoinfo;
		while (fread(&peoinfo, sizeof(struct PEOINFO), 1, fs))
		{
			checkcontact(ps);
			ps->data[ps->size] = peoinfo;
			ps->size++;
		}
		fclose(fs);
		fs = NULL;
	}
}

void menu()
{
	printf("****0.EXIT*********1.ADD***********\n");
	printf("****2.DEL**********3.SEARCH********\n");
	printf("****4.SORT*********5.SHOW**********\n");
	printf("****6.MODIFY*******7.SAVE**********\n");
}

void checkcontact(struct CONTACT* ps)
{
	if (ps->size == ps->capacity)
	{
		struct PEOINFO* str = realloc(ps->data, (ps->capacity + 2)*sizeof(struct PEOINFO));
		if (str != NULL)
		{
			ps->data = str;
			printf("扩容成功\n");
		}
		else
		{
			printf("扩容失败\n");
		}
	}
}

void add(struct CONTACT*ps)
{
	checkcontact(ps);
	printf("请输入新建联系人的姓名：");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入新建联系人的性别：");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入新建联系人的年龄：");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入新建联系人的电话号码：");
	scanf("%s", ps->data[ps->size].phone);
	printf("请输入新建联系人的地址：");
	scanf("%s", ps->data[ps->size].address);
	ps->size++;
	printf("添加成功\n");
}

void show(const struct CONTACT*ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%s\t%s\t%s\t%s\t%s\n", "姓名", "性别", "年龄", "电话", "地址");
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
		printf("通讯录为空\n");
	}
	else
	{
		int a = 0;
		char name[MAX_NAME] = { 0 };
		printf("请输入要删除的联系人姓名：");
		scanf("%s", name);
		a = find(ps, name);
		if (a == -1)
		{
			printf("该联系人不存在\n");
		}
		else
		{
			int i = 0;
			for (i = a; i < ps->size - 1; i++)
			{
				ps->data[i] = ps->data[i + 1];
			}
			ps->size--;
		}
		printf("删除成功\n");
	}
}

void search(const struct CONTACT* ps)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找的联系人姓名：\n");
	scanf("%s", name);
	int a = find(ps, name);
	if (a == -1)
	{
		printf("该联系人不存在\n");
	}
	else
	{
		printf("%s\t%s\t%s\t%s\t%s\n", "姓名", "性别", "年龄", "电话", "地址");
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
	printf("请输入要修改联系人姓名：\n");
	scanf("%s", name);
	int a = find(ps, name);
	if (a == -1)
	{
		printf("该联系人不存在\n");
	}
	else
	{
		printf("请输入修改后的姓名：");
		scanf("%s", ps->data[a].name);
		printf("请输入修改后的性别：");
		scanf("%s", ps->data[a].sex);
		printf("请输入修改后的年龄：");
		scanf("%d", &(ps->data[a].age));
		printf("请输入修改后的电话：");
		scanf("%s", ps->data[a].phone);
		printf("请输入修改后的地址：");
		scanf("%s", ps->data[a].address);
	}
	printf("修改成功\n");
}

void sort(struct CONTACT* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
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
	printf("排序成功\n");
}

void destroycontact(struct CONTACT* ps)
{
	free(ps->data);
	ps->data = NULL;
}

void Save(struct CONTACT* ps)
{
	FILE* fs = fopen("contact.dat", "wb");
	if (fs == NULL)
	{
		printf("写通讯录:%s", strerror(errno));
		return;
	}
	else
	{
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			fwrite(&ps->data[i], sizeof(struct PEOINFO), 1, fs);
		}
	}
	fclose(fs);
	fs = NULL;
}
