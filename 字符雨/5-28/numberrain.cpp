
#include<graphics.h>
#include<Windows.h>
#include<mmsystem.h>


#pragma comment(lib,"WINMM.LIB")

#define WIDTH 960//��Ļ���
#define HEIGHT 640//��Ļ�߶�
#define STR_SIZE 20//�ַ�������
#define STR_NUM 128//�ַ���������
#define STR_WIDTH 22//�ַ��Ŀ��
struct Rain
{
	int x;
	int y;
	int speed;
	char str[STR_SIZE];
}rain[STR_NUM];
int i = 0;
int j = 0;
//��������ַ�
char creatch()
{
	char temp = 0;
	int flag = rand() % 3;
	if (0 == flag)
	{
		temp = rand() % 26 + 'a';
	}
	else if (1 == flag)
	{
		temp = rand() % 26 + 'A';
	}
	else
	{
		temp = rand() % 10;
	}
	return temp;
}
//��ʼ����ṹ��
void initrain()
{
	for (i = 0; i < STR_NUM; i++)
	{
		rain[i].x = i*STR_WIDTH;
		rain[i].y = rand() % HEIGHT;
		rain[i].speed = rand() % 5 + 5;
	}
	for (i = 0; i < STR_NUM; i++)
	{
		for (j = 0; j < STR_SIZE; j++)
		{
			rain[i].str[j] = creatch();
		}
	}
}
//����Ļ������ַ���
void drawrain()
{
	/*cleardevice();*/
	for (i = 0; i < STR_NUM; i++)
	{
		for (j = 0; j < STR_SIZE; j++)
		{
			outtextxy(rain[i].x, rain[i].y-j*STR_WIDTH, rain[i].str[j]);
			settextcolor(RGB(0, 255 - 13 * j, 0));
		}
	}
}
//ʹͼ������
void playrain()
{
	for (i = 0; i < STR_NUM; i++)
	{
		rain[i].y += rain[i].speed;
		if (rain[i].y-STR_WIDTH*STR_SIZE >HEIGHT)
		{
			rain[i].y = 0;
		}
	}
}
void changerain()
{
	for (i = 0; i < STR_NUM; i++)
	{
		rain[rand() % STR_NUM].str[rand() % STR_SIZE] = creatch();
	}
}
//��������
void musicrain()
{
	mciSendString("open ./1268.mp3 alias music", 0, 0, 0);
	mciSendString("play music repeat", 0, 0, 0);
}
int main()
{
	initgraph(WIDTH, HEIGHT);
	srand(GetTickCount());
	initrain();
	musicrain();
	DWORD t1, t2;
	t1 = t2 = GetTickCount();
	while (1)
	{
		BeginBatchDraw();//�����Ļ����
		drawrain();
		changerain();
		if (t2 - t1 > 20)
		{
			playrain();
			t1 = t2;
		}
		t2 = GetTickCount();
		//�����ַ�����½��ٶ�
		EndBatchDraw();
	}
	/*system("pause");*/
	mciSendString("close music", NULL, 0, NULL);
	closegraph();
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	char ch = 'a' + 25;
//	printf("%c", ch);
//	return 0;
//}