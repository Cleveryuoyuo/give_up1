#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
////��������
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
//                                  �ļ�



// fopen:���ļ�  fclose:�ر��ļ�  FILE:����
// ����  ��ʽ             ��ַ           ָ��
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb"); // wb:�����Ƶ�д���򿪣�
	//if (pf == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//}
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);// �ر��ļ�
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfWrite = fopen("TEST.txt", "w"); //w��д�ļ�
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//д�ļ� fputc д����
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//
//	//�ر��ļ�
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

//int main()
//{
//	//�ļ�ָ��FILE
//	FILE* pfRead = fopen("TEST.txt", "r"); //r�Ƕ��ļ�
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//���ļ� fgetc д����
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[100] = "";
//	gets(buf); //���� �ַ���
//	puts(buf); //��� �ַ���
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

////��ҵ
//int main()
//{
//	char arr[13] = "";
//	printf("������һ���ؼ�������ַ�:> ");
//	scanf("%s", arr);
//	printf("��ԿΪ:> ");
//	strncat(arr,arr,7);
//	printf("%s\n", arr);
//	return 0;
//}
//1.����*p�ĳ���
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
//2. ��ͬ�ķ���
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
