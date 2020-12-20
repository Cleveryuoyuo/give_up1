#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

static void Menu()
{
	printf("############################\n");
	printf("# 1. Add           2. Del  #\n");
	printf("# 3. Search        4. Mod  #\n");
	printf("# 5. Show          6. Cls  #\n");
	printf("# 7. Sort          0. Quit #\n");
	printf("############################\n");
	printf("Please Select:> ");
}

int main()
{
	contact_t ct;
	memset(&ct, 0, sizeof(ct));
	ct.pag = TOTAL;
	int quit = 0;
	int select = 0;
	while (!quit)
	{
		Menu();
		scanf("%d", &select);
		while (select < 0 || select > 7)
		{
			printf("ÇëÖØÐÂÑ¡Ôñ:> ");
			scanf("%d", &select);
		}
			switch (select)
			{
			case 1:
				AddPerson(&ct);
				break;
			case 2:
				DelPerson(&ct);
				break;
			case 3:
				SearchPerson(&ct);
				break;
			case 4:
				ModPerson(&ct);
				break;
			case 5:
				ShowPerson(&ct);
				break;
			case 6:
				ClsContact(&ct);
				break;
			case 7:
				SortContact(&ct);
				break;
			default:
				quit = 1;
				break;
			}
		
	}


	system("pause");
	return 0;
}