
#include"game.h"

void gameinit(int arr[10][10], int x, int y)
{
	int k = 0;
	srand((unsigned)time(NULL));
	for (k = 0; k < MINE;)
	{
		int i = rand() % 10;
		int j = rand() % 10;
		if (arr[i][j] != -1)
		{
			arr[i][j] = -1;
			k++;
		}
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (arr[i][j] == -1)
			{
				for (int r = i - 1; r <= i + 1; r++)
				{
					for (int c = j - 1; c <= j + 1; c++)
					{
						if (r>=0&&r<x&&c>=0&&c<y&&arr[r][c] != -1)
						{
							arr[r][c]++;
						}
					}
				}
			}
		}
	}
}
void print(int arr[10][10], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
}
