#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <Windows.h>
#include <math.h>

int my_atoi(const char* str)
{
	int sign = 1;
	while (*str == '-' || *str > '9' || *str < '0'|| *str == ' ')
		str++;
	if (*(str-1) == '-')
		sign = 0;
	
	int ret = 0;
	while (*str > '0'&&*str < '9')
	{
		ret = ret * 10 + (*str - '0');
		str++;
	}
	if (sign == 0)
		return -ret;
	else
		return ret;
		
}
int main()
{
	//atoi
	const char* str = "vjgc-4672364";
	int ret = my_atoi(str);
	
	printf("%d\n", ret);

	system("pause");
	return 0;
}






//���ϴδ���Sort������

//void SortContact(contact_t* ct)
//{
//	//����������
//
//	for (int i = 0; i < ct->size - 1; i++)
//	{
//		for (int j = 0; j < ct->size - 1 - i; j++)
//		{
//			if (strcmp(ct->persons[j].name, ct->persons[j + 1].name)>0)
//			{
//				person_t p = ct->persons[j];
//				ct->persons[j] = ct->persons[j + 1];
//				ct->persons[j + 1] = p;
//			}
//		}
//	}
//	printf("Sort success!\n");
//
//}