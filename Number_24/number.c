#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<assert.h>

const char * my_strstr(const char * str1, const char * str2)
{
	int a = 0;
	int b = 0;
	const char* p = str2;
	while (*str1)
	{
		while (*str1 == *str2&&*str2 != '\0')
		{
			str1++;
			str2++;
			a++;
			b++;
			continue;
		}
		if (*str1 != *str2 && *str2!='\0')
		{
			a = 0;
			b = 0;
			str2 = p;
		}
		if (a == b && a != 0 && b != 0)
		{
			return str1-a;
		}
		str1++;
	}
	return NULL;
}

void Bullue_Fun(int arr[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
		}
	}
}

//void * my_memmove(void * dest, const void * src, int num)
//{
//	assert(dest);
//	assert(src);
//
//	const char* src1 = (const char*)src;
//	char* dest1 = (char*)dest;
//
//	if (dest1 > src1 && dest1 < (src1 + num)) // �Ӻ���ǰcpy
//	{
//		src1 = src1 + num - 1;
//		dest1 = dest1 + num - 1;
//		while (num)
//		{
//			*dest1 = *src1;
//			dest1--;
//			src1--;
//			num--;
//		}
//	}
//	else
//	{
//		while (num)
//		{
//			*dest1 = *src1;
//			dest1++;
//			src1++;
//			num--;
//		}
//	}
//}

int my_compar(const void* p1, const void* p2)
{
	int q1 = *(int*)p1;
	int q2 = *(int*)p2;
	return (q1-q2);
}
void my_qsort(void* base, int num, int size, int(*my_compar)(const void*, const void*))
{
	int* arr = (int*)base;
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			if (my_compar(arr[j],arr[j+1])>0)
			{
				int a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
		}
	}
}
int main()
{
	//�ص�����qsort ������
	//�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ
	//�������������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸ�
	//������ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼���
	//����������Ӧ��
	//void qsort (void* base, size_t num, size_t size,int(*compar)(const void*, const void*));

	int arr[] = {46, 7, 3, 1, 356, 435, 468, 34, 68, 3, 8, 92, 1, 7 };
	//qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), my_compar);
	my_qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), my_compar);

	int num = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}

	//my_memcpy ʵ�ֵ����ֽڵĿ���
	//char arr[20] = "abcdef";
	////char arr1[16] = { 0 };
	//int len = strlen(arr);
	//my_memmove(arr+2, arr, len);
	//printf("%s\n", arr);

	//printf("%d\n", 3 % 7);


	//ð������
	//int arr[] = { 3, 1, 5, 8, 2, 26, 8, 2345, 758, 135, 642, 836, 3425, 1 };
	//int len = sizeof(arr) / sizeof(arr[0]);
	//Bullue_Fun(arr,len);
	//for (int i = 0; i < len; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	//printf("\n");


	//ģ��strstr
	//const char* str1 = "abcd12345678";
	//const char* str2 = "25";
	//char* str = my_strstr(str1, str2);
	//printf("%s\n", str);

	////strtok
	//char str[] = "sn*inr@ifn.in&in-"; // ����ַ���������ָ����ʽ��
	//char* str1 = "*@&.-";
	//char* pch;
	//pch = strtok(str, str1);
	//while (pch!=NULL)
	//{
	//	printf("%s\n", pch);
	//	pch = strtok(NULL, str1);
	//}

	//char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	//char**cp[] = { c + 3, c + 2, c + 1, c };
	//char***cpp = cp;
	//printf("%s\n", **++cpp); // POINT
	//printf("%s\n", *--*++cpp + 3); //ER
	//printf("%s\n", *cpp[-2] + 3);  //ST
	//printf("%s\n", cpp[-1][-1] + 1);  //EW

	system("pause");
	return 0;
}