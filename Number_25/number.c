#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>
#include<string.h>

//4
int compar(const void* xp, const void* yp)
{
	const int x = *(const int*)(xp);
	const int y = *(const int*)yp;
	if (x == y)
		return 0;
	return x > y ? 1 : -1;
}
void my_qsort(void* base, int num, int size, int(*compar)(const void*, const void*))
{
	int* arr = (int*)base;
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			if (compar(arr + j, arr + j + 1)>0)
			{
				int a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
		}
	}

}

//3
char* my_strncat(char* dest, const char* src, int num)
{
	int len = strlen(dest);
	for (int i = 0; i < num; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + num] = '\0';
	return dest;
}
//2
char * my_strncpy(char * dest, const char * src, int num)
{
	if (dest>src&&dest < src + num)
	{
		for (int i = num; i>0; i--)
		{
			*(dest + i - 1) = *(src + i-1);
		}
		*(dest + num) = '\0';
		return dest;
	}
	else
	{
		for (int i = 0; i < num; i++)
		{
			dest[i] = src[i];
		}
		dest[num] = '\0';
		return dest;
	}
}

//1
void Find_one(int* arr, int num)
{
	for (int i = 0; i < num; i++)
	{
		int dog = arr[i];
		int ret = 0;
		for (int j = 0; j < num; j++)
		{
			if (i == j)
				continue;
			if (dog == arr[j])
			{
				ret++;
				break;
			}
		}
		if (!ret)
			printf("%d ", dog);
	}
}


// 1 异或找法 找只出现了一次的数字
void findTwoNum(int arr[], int n, int * pnum1, int * pnum2)
{
	int i;
	int sum = 0;
	for (i = 0; i < 9; i++)
	{
		sum ^= arr[i];
	} 
	//先找到两个数互相异或的结果
	int pos;
	for (i = 0; i < 32; i++)
	{
		if (sum & 1 << i)
		{
			pos = i;
			break;
		}
	} 
	//再找到有分歧的一位。在这一位上，两个数一定是一个1一个0
		*pnum1 = *pnum2 = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] & 1 << pos)
		{
			*pnum1 ^= arr[i]; //这一位是1的，放在数1里
		}
		else
		{
			*pnum2 ^= arr[i]; //这一位是0的，放在数2里
		}
	}
}

int main()
{
	//一：一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
	//编写一个函数找出这两个只出现一次的数字。
	int arr[] = { 4, 5, 7, 9, 7, 4, 0, 9 };
	int num = sizeof(arr) / sizeof(arr[0]);
	//Find_one(arr, num);

	//二：模拟实现strncpy 对字符串的拷贝
	//char * strncpy ( char * destination, const char * source, size_t num );
	//char str1[20] = "abcde";
	//char str2[20] = "123456789";
	//char* after = my_strncpy(str1+1, str1, 4);
	//printf("%s\n", after);


	////三：模拟实现strncat 对字符串的追加 追加自身
	////char * strncat ( char * destination, const char * source, size_t num )
	//char str1[20] = "abcde";
	//char str2[20] = "123456789";
	//char* after = my_strncat(str1, str2, 4);
	//printf("%s\n", after);

	//四：重复练习排序 qsort
	//int arr[] = { 3, 1, 5, 7, 2 };
	//my_qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), compar);
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", arr[i]);
	//}


	//追加到第一元素上
	//char str1[20] = "abcde";
	//char str2[] = "12345";
	//printf("%s\n",strcat(str1, str2));

	//加长度比较大小
	//char str1[] = "abcdef";
	//char str2[] = "abcdeg";
	//printf("%d\n", strncmp(str1, str2,6));

	//比较大小 返回 -1 0 1
	//char str1[] = "abcde";
	//char str2[] = "zbdfr";
	//printf("%d\n", strcmp(str1, str2));

	system("pause");
	return 0;
}