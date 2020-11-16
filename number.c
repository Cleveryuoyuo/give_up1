#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
////柔性数组
//struct s
//{
//	int n;
//	int arr[];
//};
//int main()
//{
//	struct s s;
//	struct s* ps =(struct s*) malloc(sizeof(s)+10*sizeof(int));
//	ps->n = 100;
//	printf("%d\n", ps->n);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//struct s
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	printf("%d", sizeof(struct s));  // ==8;
//	return 0;
//}
#include <string.h>
#include <errno.h>
//                                  文件



// fopen:打开文件  fclose:关闭文件  FILE:类型
// 名字  方式             地址           指针
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb"); // wb:二进制的写（打开）
	//if (pf == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//}
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);// 关闭文件
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfWrite = fopen("TEST.txt", "w"); //w是写文件
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//写文件 fputc 写东西
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

//int main()
//{
//	//文件指针FILE
//	FILE* pfRead = fopen("TEST.txt", "r"); //r是读文件
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//读文件 fgetc 写东西
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[100] = "";
//	gets(buf); //输入 字符串
//	puts(buf); //输出 字符串
//	return 0;
//}

//struct s
//{
//	int n;
//	float s;
//	char a[10];
//};
//int main()
//{
//	struct s ps = { 10, 3.14f, "nishizhu" };
//
//}

////作业
//int main()
//{
//	char arr[13] = "";
//	printf("请输入一个关键词五个字符:> ");
//	scanf("%s", arr);
//	printf("密钥为:> ");
//	strncat(arr,arr,7);
//	printf("%s\n", arr);
//	return 0;
//}
//1.计算*p的长度
//unsigned int MyStrlen(char*p)
//{
//	unsigned int len = 0;
//	for (; *p != 0; p++)
//	{
//		len++;
//	}
//	return len;
//}
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", MyStrlen(p));
//	return 0;
//}
//2. 不同的方法
//unsigned int MyStrlen(char s[])
//{
//	char* p = s;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p-s;
//}
//int main()
//{
//	char s[] = "abcdef";
//	printf("%d\n", MyStrlen(s));
//	return 0;
//}
//3.
//int MyStrcmp(char* p1, char* p2)
//{
//	for (; *p1 == *p2; p1++, p2++)
//	{
//		if (*p1 == '\0')
//			return 0;
//	}
//	return *p1-*p2;
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcghl";
//	printf("%d\n",MyStrcmp(p1, p2));
//	return 0;
//}
//4.
//int MyStrcmp(char s[], char t[])
//{
//	int i = 0;
//	for (i = 0; s[i] == t[i]; i++)
//	{
//		if (s[i] == '\0')
//			return 0;
//	}
//	return s[i] - t[i];
//}
//int main()
//{
//	char s[] = "abcdef";
//	char t[] = "abcghl";
//	printf("%d\n", MyStrcmp(s, t));
//	return 0;
//}
//5.
int main()
{
	char password[7] = "secret";
	char userInput[81]="0";
	printf("Input Password:>");
	scanf("%s", userInput);
	int ret = strcmp(password, userInput);
	if (ret==0)
		printf("Correct password!Welcome to whe system...\n");
	else if (ret == -1)
		printf("Invalid password!user input<password\n");
	else
		printf("Invalid password!user input>password\n");
	return 0;
}
