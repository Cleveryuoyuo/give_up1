#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <Windows.h>

int main()
{
	FILE* fp = fopen("test.txt", "w");
	if (fp == NULL)
	{
	//���������ļ�Ҳ�ùر��ļ� 
		printf("�ļ��������\n");
		return 1;
	}


	//4. fprintf��w����
	//int a = 100;
	//char* ret = "hello world";
	//double b = 3.14;
	//fprintf(fp, "%d|%s|%f\n", a, ret, b); //fp����stdout�Ϳ���д����Ļ��

	//3. fgets�Ĳ�����r
	//char* ret;
	//char arr[100];
	//while (1)
	//{
	//	ret = fgets(arr, 1000, fp); //������������ ����ֵ��һ���ַ��� ���пռ���� �ڶ����ǿռ��С 
	//	if (ret == NULL)
	//	{
	//		break;
	//	}
	//	printf("%s ", ret);
	//}

	//2.
	//fgetc��������������ȡ�ļ������ÿһ���ַ� ����while��ӡ���� ��txt�����ж��� ��r������ get�ǵõ�
	//char c = 'a';
	//while ((c = fgetc(fp)) != EOF)
	//{
	//	printf("%c", c);
	//}
	//printf("...end!\n");

	//1.
	////�ر��� fclose
	////���������·����ֻдtest.txt �򴴽����ı����ڵ�ǰ·�����ļ����� Ҳ����number.c��·�� put��д��
	//// FILE �����Ƿ���·���������ļ�
	////��Ϊ��˫�����ڲ������� \ �ͱ���Ϊ��ת���� ���Ե�������\\
	//// w Ҫ���ļ�������test.txt�򲻴��� Ҫ��û�оʹ���һ�� ����д�Ĺ���

	//char c = 'a';
	//if (fp == NULL)
	//{
	////���������ļ�Ҳ�ùر��ļ� 
	//	printf("�ļ��������\n");
	//	return 1;
	//}
	////for (; c <= 'z'; c++)
	////{
	////	fputc(c, fp); //# c fputc��������������fp��д��c�� ������������ һ�����ַ��Ĵ���  fputc��
	////}					    Ҳ���԰�fp�ĳ�stdout ����д����ʾ������

	//fputs("abc", fp);  // # s ֱ�Ӵ������� ֱ��˫����  fputs

	fclose(fp);

	system("pause");
	return 0;
}