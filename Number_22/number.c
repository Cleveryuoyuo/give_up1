#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

void reverse_string(char a[], int begin, int end)
{
	int temp = a[begin];
	a[begin] = a[end-1];
	a[end-1] = temp;
	begin++;
	end--;
	if (end > begin){
		reverse_string(a, begin, end);
	}

}

//水仙花数
int leicheng(int x, int y)
{
	int p = x;
	while (--y)
	{
		p *= x;
	}
	return p;
}
void NarcBer()
{
	int ret = 0;
	int str = 0;
	int x = 0;
	int y = 0;
	int sult = 0;
	for (int i = 0; i < 100000; i++)
	{
		int j = i;
		if (i < 10)
		{
			printf("%d ", i);
		}
		else
		{
			int peg = i;
			while (peg)
			{
				ret++;
				peg /= 10;
				y = ret;
			}
			int xf = 0;
			while (ret)
			{
				x = y;
				str = j % 10;
				if (j > 9)
					xf = leicheng(str, x);
				if (j < 10)
				{
					xf = leicheng(j, x);
				}
				sult += xf;
				j /= 10;
				ret--;
			}
			if (sult == i)
			{
				printf("%d ", i);
			}
			sult = 0;
		}
	}
}

// 打印 *
void Show(int row)
{
	int ret = row / 2;
	int y = 2+1;
	while (ret>2)
	{
		y += 2;
		ret--;
	}
	for (int i = 1; i <= row; i+=2)
	{
		int j = i;
		for (int x = 1; x < y; x++)
		{
			printf(" ");
		}
		while (j--)
		{
			printf("* ");
		}
		y -= 2;
		printf("\n");
	}
	y = 2;
	for (int i = row - 1; i > 1; i -= 2)
	{
		int j = i - 2;
		for (int x = 0; x < y; x++)
		{
			printf(" ");
		}
		while (j--)
		{
			printf("* ");
		}
		y += 2;
		printf("\n");
	}
}

int DrinkSoda(int money)
{
	int total = money;
	int empty = money;
	while (empty > 1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	return total;
}

int MyStrlen1(char p[])
{
	int len = 0;
	while (*p != 0)
	{
		len++;
		p++;
	}
	return len;
}

void Strcpy1(char p1[], char p2[])
{
	while (*p2 = *p1)
	{
		p2++;
		p1++;
	}
}

void Adjust(int arr[],int len)
{
	int str = 0;
	int end = len - 1;
	while (end > str)
	{
		if (arr[str] % 2 != 0)
		{
			str++;
		}
		if (arr[end] % 2 == 0)
		{
			end--;
		}
		if (arr[str] % 2 == 0 && arr[end] % 2 != 0)
		{
			int temp = arr[str];
			arr[str] = arr[end];
			arr[end] = temp;
			str++;
			end--;
		}
	}
}
int main()
{

	//奇数在偶数前面
	//int arr[] = { 3, 6, 2, 8, 4, 325, 1665, 24, 2 };
	//int len = sizeof(arr) / sizeof(arr[0]);
	//Adjust(arr,len);
	//for (int i = 0; i < len; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	/*char p1[] = "abcd1234";
	char p2[10] = "0";
	Strcpy1(p1, p2);
	printf("%s\n", p2);*/

	//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）
	//int money = 0;
	//scanf("%d", &money);
	//int num = DrinkSoda(money);
	//printf("可以喝%d瓶汽水。", num);

	/*char a[] = "abcde1234";
	int len = strlen(a);
	reverse_string(a, 0, len);
	printf("%s\n", a);
*/

	//int a = 10;
	//int b = 20;
	//a = a ^ b;
	//b = a ^ b;
	//a = a ^ b;
	//printf("a=%d b=%d", a, b);

	//int a = 10;
	//int count = 0;
	//while (a){
	//	if (a % 2 == 1){
	//		count++;
	//	}
	//	a /= 2;
	//}
	//printf("%d\n", count);

	//int a = 10;
	//printf("偶数位：");
	//for (int i = 31; i > 0; i -= 2){
	//	printf("%d ", ((a>>i) & 1));
	//}
	//printf("奇数位：");
	//for (int i = 30; i >= 0; i -= 2){
	//	printf("%d ", ((a >> i) & 1));
	//}

	//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
	//输入例子 :
	//1999 2299
	//输出例子 : 7
	/*int a = 1999;
	int b = 2299;
	int c = a ^ b;
	int count = 0;
	while (c > 0){
		if (c % 2 == 1){
			count++;
		}
		c /= 2;
	}
	printf("%d\n", count);*/

	//int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//int* p = &arr;
	//int size = 10;
	//while (size)
	//{
	//	printf("%d ", *p);
	//	p++;
	//	size--;
	//}

	//char arr[100] = { 0 };
	//gets(arr);
	//int len = strlen(arr);
	//char* p1 = arr;
	//char* p2 = arr + len - 1;
	//while (p2 > p1)
	//{
	//	char temp = *p1;
	//	*p1 = *p2;
	//	*p2 = temp;
	//	p1++;
	//	p2--;
	//}
	//printf("%s\n", arr);

	//int k = 0;
	//scanf("%d", &k);
	//int p = k;
	//int ret = k;
	//for (int i = 0; i < 4; i++)
	//{
	//	k = k * 10 + p;
	//	ret += k;
	//}
	//printf("%d\n", ret);

	// 水仙花数 NarcBer();

	//打印
	//int row = 0;
	//scanf("%d", &row);
	//Show(row*2);

	char p[] = "abcd1234";
	int len = MyStrlen1(p);
	printf("长度:%d\n", len);






	system("pause");
	return 0;
}