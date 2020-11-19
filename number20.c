#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int Fac(int N)
//{
//	int ret = 1;
//	printf("%d\n", ret*N);
//	if (N == 0)
//		return 1;
//	return Fac(N - 1)*N;
//}
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int a = Fac(N);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int arr[25][25] = { 0 };
//	for (int i = 0; i < ; i++)
//	{
//		for (int j = 0; j < ; j++)
//		{
//			if (arr[i][j] < Z)
//				arr[i][j] = A + j;
//			else
//				arr[i][j]=
//		}
//	}
//	return 0;
//}

//斐波那契 O(N) 迭代
// 1 1 2 3 5 8 13 21 34 55... 
//unsigned long long Fib(int N)
//{
//	unsigned long long first = 1, second = 1;
//	unsigned long long ret = 1;
//	for (int i = 2; i < N; i++)
//	{
//		ret = first + second;
//		first = second;
//		second = ret;
//	}
//	//时间复杂度是O(N)
//	return ret;
//}

//Fib(int N)
//{
//	if (N < 3)
//		return 1;
//	return Fib(N - 1) + Fib(N - 2);
//}

//int main()
//{
//	printf("%d\n", Fib(10));
//	return 0;
//}

// (int*)malloc((1+2)*sizeof(arr1[0])
//int main()
//{
//	int arr1[] = { 2, 5, 6, 8 };
//	int arr2[] = { 1, 3, 5, 7, 8, 9 };
//	int* arr = (int*)malloc((4+6)*sizeof(arr1[0]));
//	int i = 0, j = 0, n = 0;
//	while (i < 4 && j < 6)//i<arr1的元素 j相同
//	{
//		if (arr1[i] <= arr2[j])
//			arr[n++] = arr1[i++];
//		else
//			arr[n++] = arr2[j++];
//	} 
//	while (i<4)
//		arr[n++] = arr1[i++];
//	while (j<6)
//		arr[n++] = arr2[j++];
//	for (i = 0; i < 10; i++)//i<
//	{
//		printf("%d ", arr[i]);
//	}
//	free(arr);
//
//	return 0;
//}

//int Fac(int N)
//{
//	if (N == 0)
//		return 1;
//	return Fac(N - 1)*N;
//}

//main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	int *p = a + 5, *q = NULL;
//	*q = *(p + 5);
//	printf("%d  %d\n", *p, *q);
//}

//struct stu
//{
//	int xuehao;
//	char name[10];
//	char sex[10];
//	float chengji[3];
//	float pingjun;
//};
//void input(struct stu s[])
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("请输入学号，姓名，性别，三门课的成绩成绩:> ");
//		scanf("%d %s %s %f %f %f", &s[i].xuehao, &s[i].name, &s[i].sex,
//			&s[i].chengji[0], &s[i].chengji[1], &s[i].chengji[2]);
//		s[i].pingjun = (s[i].chengji[0] + s[i].chengji[1] + s[i].chengji[2]) / 3;
//	}
//}
//void print(struct stu s[])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("学号：%d\n姓名：%s\n性别：%s\n成绩分别是：%f %f %f\n", 
//			s[i].xuehao, s[i].name, s[i].sex,
//			s[i].chengji[0], s[i].chengji[1], s[i].chengji[2]);
//		printf("平均成绩=%f\n", s[i].pingjun);
//	}
//}
//int main()
//{
//	struct stu s[5];
//	struct Student *p = s;
//	input(p);
//	print(p);
//	return 0;
//}
#include <string.h>
//int main()
//{
//	char a[10], b[10], c[10];
//	char d[10]="0";
//	scanf("%s %s %s", &a, &b, &c);
//	if ((strcmp(a, b)) > 0)
//	{
//		strcpy(d, a);
//		strcpy(a, b);
//		strcpy(b, d);
//	}
//	if ((strcmp(a, c)) > 0)
//	{
//		strcpy(d, a);
//		strcpy(a, c);
//		strcpy(c, d);
//	}
//	if ((strcmp(b, c)) > 0)
//	{
//		strcpy(d, b);
//		strcpy(b, c);
//		strcpy(c, d);
//	}
//	printf("%s %s %s\n", a, b, c);
//	return 0;
//}
//
//
//void my_strcpy(char* p2, char* p1,int ret)
//{
//	int i = 0;
//	for (i = 0; i < ret; i++)
//	{
//		* p2++ = * p1++;
//	}
//}
//int main()
//{
//	char s1[10] = "abcdef";
//	char s2[10] = "ghlmno";
//	int ret = strlen(s1);
//	my_strcpy(s2, s1, ret);
//	printf("%s\n", s2);
//	return 0;
//}

//int main()
//{
//	FILE *f1, *f2, *f3;
//	int a;
//	char ch;
//	printf("输入1为文件加密，输入2为文件解密，输入其他字符退出程序\n");
//	while (scanf("%d", &a))
//	{
//		if (a == 1)
//		{
//			f1 = fopen("file1.txt", "r");
//			f2 = fopen("file2.txt", "w");
//			if (f1 == NULL || f2 == NULL)
//			{
//				printf("Open file1 failed!\n");
//				exit(0);
//			}
//
//			while ((ch = fgetc(f1)) != EOF)
//			{
//				if (ch >= 'A'&&ch <= 'Z' || ch >= 'a'&&ch <= 'z')
//				{
//					ch = ch + 3;
//					if (ch>'z' || (ch>'Z'&&ch <= 'Z' + 3))
//						ch = ch - 26;
//				}
//				fprintf(f2, "%c", ch);
//			}
//			fclose(f2);
//			fclose(f1);
//			printf("\nFile1 is encrypted!\n");
//		}
//		else if (a == 2)
//		{
//			f2 = fopen("file2.txt", "r");
//			f3 = fopen("file3.txt", "w");
//			if (f2 == NULL || f3 == NULL)
//			{
//				printf("Open file2 failed!\n");
//				exit(0);
//			}
//			while ((ch = fgetc(f1)) != EOF)
//			{
//
//				if (ch >= 'A'&&ch <= 'Z' || ch >= 'a'&&ch <= 'z')
//				{
//					ch = ch - 3;
//					if (ch<'A' || (ch<'a'&&ch >= 'Z' + 3))
//						ch = ch + 26;
//				}
//				fprintf(f3, "%c", ch);
//			}
//			fclose(f3);
//			fclose(f2);
//			printf("\nFile2 is decrypted!\n");
//		}
//		else
//		{
//			printf("Ended\n");
//			break;
//		}
//	}
//
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct stu 
//{
//	int xuehao;
//	char name[20];
//	char sex[10];
//	float chengji[3];
//	float pingjun;
//};
//void input(struct stu s[])
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("请输入学号，姓名，性别，三门课的成绩成绩:> ");
//		scanf("%d %s %s %f %f %f", &s[i].xuehao, &s[i].name, &s[i].sex,
//			&s[i].chengji[0], &s[i].chengji[1], &s[i].chengji[2]);
//		s[i].pingjun = (s[i].chengji[0] + s[i].chengji[1] + s[i].chengji[2]) / 3;
//	}
//}
//void search(struct stu s[])
//{
//	char name[20];
//	printf("请输入查询的姓名:>");
//	scanf("%s", name);
//	int pos = FindByName(s, name);
//	if (pos == -1)
//	{
//		printf("要查找的人不存在\n");
//	}
//	else
//	{
//		printf("%d %s %s %f %f %f\n",s[pos].xuehao, s[pos].name, 
//			s[pos].sex, s[pos].chengji[0], s[pos].chengji[1], s[pos].chengji[2]);
//	}
//}
//int FindByName(struct stu s[], char name[20])
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		if (0 == strcmp(s[i].name, name))
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//void paixu(struct stu s[])
//{
//	printf("平均成绩由高到低:>\n");
//	struct stu temp;
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = i + 1; j < 5; j++)
//		{
//			if (s[i].pingjun < s[j].pingjun)
//			{
//				temp = s[i];
//				s[i] =s[j];
//				s[j] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 5; i++) 
//	{
//		printf("%f\n", s[i].pingjun);
//	}
//}
//void DelContact(struct stu s[])
//{
//	char name[20];
//	printf("请输入要删除人的名字:>");
//	scanf("%s", name);
//	int pos = FindByName(s, name);
//	if (pos == -1)
//	{
//		printf("要删除的人不存在\n");
//	}
//	else  
//	{
//		int j = 0;
//		for (j = pos; j < 4; j++)
//		{
//			s[pos] = s[pos + 1];
//		}
//		printf("删除成功\n");
//	}
//}
//void print(struct stu s[])
//{
//	printf("最后的成员信息:>");
//	for (int i = 0; i <5; i++)
//	{
//		printf("学号：%d\n姓名：%s\n性别：%s\n成绩分别是：%f %f %f\n",
//			s[i].xuehao, s[i].name, s[i].sex,
//			s[i].chengji[0], s[i].chengji[1], s[i].chengji[2]);
//		printf("平均成绩=%f\n", s[i].pingjun);
//	}
//}
//int main()
//{
//	struct stu s[5];
//	input(s);
//	search(s);
//	paixu(s);
//	DelContact(s);
//	print(s);
//	return 0;
//}

int main()
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a > b)
		printf("%d", a);
	else
		printf("%d", b);
	return 0;
}