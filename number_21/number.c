#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0, count = 0;
//	for (i = 0; a != 0; i++)
//	{
//		if (a % 2 == 1)
//			count++;
//		a /= 2;
//	}
//	printf("该数字的二进制一的个数为：%d", count);
//	return 0;
//}

int Search(int* arr,int len)
{
	int k = 2;
	int left = 0;
	int right = len - 1;
	while (left <= right){
		
			int mid = (left + right) / 2;
			if (k > arr[mid]){
				left = mid + 1;
				right--;
			}
			else if (k < arr[mid]){
				right = mid - 1;
				left++;
			}
			else if(k == arr[mid])
			{
				return mid;
				break;
			}

		}
}

int IsLeapYear(year)
{
	int a = year;
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0){
		return 1;
	}
	return 0;
}

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//void PithyFor(int a){
//	int j = 1;
//	for (int i = 1; i <= a; i++){
//		for (j = 1; j <= i; j++){
//			printf("%d*%d=%d ",i,j, i*j);
//		}
//		printf("\n");
//	}
//}

//void FirstP(int b)
//{
//	if (b > 9){
//		int p = b % 10;
//		b /= 10;
//		printf("%d ", p);
//		FirstP(b);
//	}
//	else 
//		printf("%d ", b);
//
//}

int Strlen(char* p)
{
	int count = 0;
	while (*p != '\0'){
		count++;
		p++;
	}
	return count;
}

int DStrlen(char* p)
{
	if (*p == '\0'){
		return 0;
	}
	return 1 + DStrlen(1 + p);
}

int fac(int a)
{
	if (a == 1)
		return 1;
	return fac(a - 1)*a;
}
int fac1(int a)
{
	int ret = 1;
	for (int i = 2; i <= a; i++){
		ret = ret*i;
	}
	return ret;
}
void reverse_string(char* p)
{
	if (*p != '\0'){
		p++;
		reverse_string(p);
	}
	printf("%c ", p);
}
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//
//	*(arr + len - 1) = tmp;
//}

int DigitSum(int num)
{
	if (num > 9)
		return DigitSum(num / 10) + (num % 10);
	else
		return num;
}

int Pow(int n, int k)
{
	if (k>0)
		return n*Pow(n , k - 1);
	return n;
}
int Fib(int a)
{
	if (a>2)
		return Fib(a - 1) + Fib(a - 2);
	return 1;
}

int Fib1(int a)
{
	int first = 1;
	int second = 1;
	int third = 1;
	while (a>2)
	{
		third = first + second;
		first = second;
		second = third;
		a--;
	}
	return third;
}

void Bubble_Fun(int arr[], int num)
{
	for (int i = 0; i < num-1 ; i++){
		for (int j = 0; j< num - 1 - i; j++){
			if (arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
void print(int arr[],int num)
{
	for (int i = 0; i < num; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void Init(int arr[], int num)
{
	for (int i = 0; i < num; i++){
		arr[i] = i;
	}
}
void reverse_arr(int arr[], int num)
{
	for (int i = 0, j = num - 1; j>i; i++,j--){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

void Change(int arr1[], int arr2[], int num)
{
	for (int i = 0; i < num; i++){
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}
int main()
{
	//交换数组A B的内容
	int arr1[] = { 0, 1, 2, 3, 4 };
	int arr2[] = { 9, 8, 7, 6, 5 };
	int num = sizeof(arr1) / sizeof(arr1[0]);
	print(arr1, num);
	print(arr2, num);
	Change(arr1, arr2, num);
	print(arr1, num);
	print(arr2, num);

	//冒泡函数
	/*int arr[] = { 4, 5, 6, 324, 6, 4, 228, 9, 2, 8, 0 };
	int num = sizeof(arr) / sizeof(arr[0]);
	print(arr, num);
	Bubble_Fun(arr, num);
	print(arr, num);
*/
	//数组函数的初始化和打印 逆置
	/*int arr[10];
	Init(arr,10);
	print(arr, 10);
	reverse_arr(arr, 10);
	print(arr, 10);*/

	//三子棋
	


	//1,1,2,3,5,8,13,21,34,55
	/*int a = 10;
	printf("%d\n",Fib1(a));*/

	/*int n = 2;
	int k = 5;
	int p = Pow(n,k);
	printf("%d\n", p);*/

	/*int a = 1792;
	int ret = DigitSum(a);
	printf("%d\n", ret);*/

	//char* p = "abcdef";
	//reverse_string(p);
	//printf("%s", p);

	/*int a = 0;
	printf("请输入阶乘数：");
	scanf("%d", &a);
	int num = fac1(a);
	int ret = fac(a);
	printf("%d\n", num);*/

	//char* p = "abcdef";
	////int len = Strlen(p);
	//int len = DStrlen(p);
	//printf("len = %d", len);

	/*int b = 2048561;
	FirstP(b);
*/
	/*int a = 0;
	printf("输入 a = ");
	scanf("%d", &a);
	PithyFor(a);*/

	/*Swap(a, b);*/

	/*int year = 0;
	scanf("%d", &year);
	if (IsLeapYear(year)){
		printf("%d 是闰年", year);
	}
	else
		printf("%d 不是闰年！",year);*/

	//for (int i = 100; i <= 200; i++){
	//	int j = 0;
	//	for ( j = 2; j < i; j++){
	//		if (i%j == 0){
	//			break;
	//		}
	//		}
	//	if (i == j){
	//		printf("%d ", i);
	//	}
	//}

	//int arr[10] = {  1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//int len = sizeof(arr)/sizeof(arr[0]);
	//
	//	int pos = Search(arr, len);
	//	if (pos >= 0 && pos < 9){
	//		printf("找到了，下表是%d\n", pos);
	//	}
	//	else
	//	printf("找不到\n");

	//char p[] = "hello";
	//int sz = strlen(p),j=0;
	/*char c = 0;
	j = sz - 1;
	for (int i = 0; i < (sz-1)/2 ; i++,j--)
	{
		c = p[sz-1];
		p[sz - 1] = p[i];
		p[i] = c;
	}
	printf("%s", p);
	return 0;*/

	//int a = 10;
	//int b = 20;
	//int c = 0;
	//while (c=a%b)
	//{
	//	a = b;
	//	b = c;
	//}
	//printf("最大公约数%d\n", b);
	//return 0;
	
	/*int a = 1000;
	int b = 2000;
	for (int i = 1000; i < 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0)
			printf("%d ", i);

	}*/

	
	/*for (int i = 100; i < 200; i++){
		
		for (int j = 2; j < i; j++){
			if (i%j == 0)
				break;
			printf("%d ", i);
			
		}*/
	//}

	/*int i = 0;
	int count = 0;
	for (i == 0; i < 100; i++)
	{
		while (i)
		if (i % 10 == 9){
			printf("%d ", i);
			count++;
		}
	}
	printf("%d ", count);*/

	/*int a = 0, b = 0;
		for (a = 1, b = 1; a <= 100; a++)
		{
			if (b >= 20) break;
			if (b % 3 == 1)
			{
				b = b + 3;
				continue;
			}
			b = b - 5;
		}
		printf("%d\n", a);*/
		return 0;
	}