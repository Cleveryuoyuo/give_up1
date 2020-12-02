#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
#include <assert.h>

//void yanghui(int n)
//{
//	int arr[30][30] = { 1 };
//	for (int i = 0; i < n; i++)
//	{
//		arr[i][0] = 1;
//		for (int j = 1; j <= i; j++)
//		{
//			if (j < i)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//			if (j == i)
//			{
//				arr[i][j] = 1;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}

void bullue_fun(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}

}
// int (* (*p) [10] ) (int *)

int compar (const void* xp, const void* yp)
{
	int x = *(const int*)xp;
	int y = *(const int*)yp;
	if (x == y)
		return 0;
	return x > y ? -1 : 1;
}

void my_qsort(void* base, size_t num, size_t size, int(*compar)(const void*, const void*))
{
	int* arr = (int*)base;
	for (size_t i = 0; i < num - 1; i++)
	{
		for (size_t j = 0; j < num - 1 - i; j++)
		{
			if (compar(arr+j,arr+j+1)<0)
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
}

int comstr(const void* xp, const void* yp)
{
	const char* x = *(const char**)xp;
	const char* y = *(const char**)yp;
	return strcmp(x, y);
}

int my_strlen1(char arr[])
{
	int len = 0;
	while ( *arr !='\0')
	{
		arr++;
		len++;
	}
	return len;
}
int my_strlen2(char arr[]) // 递归
{
	if (*arr == '\0')
		return 0;
	else
		return 1 + my_strlen2(arr + 1);
}
int my_strlen3(char arr[])
{
	char* p = arr;
	while (*arr != '\0')
	{
		arr++;
	}
	return arr - p;
}
char* my_strcpy(const char* arr1, char* arr2)
{
	char* ret = arr2;
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	while (*arr2=*arr1)
	{
		arr1++;
		arr2++;
	}
	return ret;
}

int my_strcmp(const char * str1, const char * str2)
{
	while (*str1 != 0 || *str2 != 0)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		if (*str1 > *str2)
			return 1;
		if (*str1 < *str2)
			return -1;
	}
	return 0;
}

char * my_strcat(char * dest, const char * src)
{
	char* p = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src; 
		src++;
		dest++;
	}
	return p;
}
int main()
{
	//模拟实现strcat
	char dest[20] = "hello ";
	const char* src = "world";
	my_strcat(dest, src);
	printf("%s\n", dest);

	//模拟实现strcmp
	//const char* str1 = "abcd1234";
	//const char* str2 = "abca1234";
	//printf("%d\n",my_strcmp(str1, str2));

	//模拟实现strcpy
	//const char arr1[] = "helle bit";
	//char arr2[10] = "";
	//my_strcpy(arr1, arr2);
	//printf("%s\n", arr2);

	//模拟实现strlen
	//char arr[] = "abcd12345";
	//int len = my_strlen1(arr);
	//int len = my_strlen2(arr);
	//int len = my_strlen3(arr);
	//printf("len = %d\n", len);

	//char *arr[5] = { "a4bcd", "a5bcd", "a2bcd", "a1bcd", "a3bcd" };
	//int num = sizeof(arr) / sizeof(arr[0]);
	//my_qsort(arr, num, sizeof(char*), comstr);

	//函数指针
	//void(*pf)(int int )
	//数组指针
	//int(*arr)[10]

	/*int arr[] = { 3, 63, 1, 3456, 8, 2, 1, 6, 8, 2356, 72, 1, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bullue_fun(arr, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}*/

	/*int n = 5;
	yanghui(n);*/

	system("pause");
	return 0;
}