
#include"game.h"
int main()
{
	initgraph(WIDTH, HEIGHT,SHOWCONSOLE);
	int checkerboard[ROW][COL] = {0};
	gameinit(checkerboard, ROW, COL);
	print(checkerboard, ROW, COL);
	


	while (1);
	closegraph();
	return 0;
}
