

#include"contact.h"
#include<stdio.h>



int main()
{
	struct CONTACT contact;
	initcontact(&contact);
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			Save(&contact);
			destroycontact(&contact); break;
		case ADD:
			add(&contact); break;
		case DEL:
			del(&contact); break;
		case SEARCH:
			search(&contact); break;
		case SORT:
			sort(&contact); break;
		case SHOW:
			show(&contact); break;
		case MODIFY:
			modify(&contact); break;
		case SAVE:
			Save(&contact); break;
		default:
			printf("选择错误，请重新选择\n");
		}
	} while (input);
	return 0;
}