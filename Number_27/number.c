#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <Windows.h>

int main()
{
	FILE* fp = fopen("test.txt", "w");
	if (fp == NULL)
	{
	//创建打开了文件也得关闭文件 
		printf("文件输入错误！\n");
		return 1;
	}


	//4. fprintf用w操作
	//int a = 100;
	//char* ret = "hello world";
	//double b = 3.14;
	//fprintf(fp, "%d|%s|%f\n", a, ret, b); //fp换成stdout就可以写入屏幕上

	//3. fgets的操作用r
	//char* ret;
	//char arr[100];
	//while (1)
	//{
	//	ret = fgets(arr, 1000, fp); //传入三个参数 返回值是一个字符串 得有空间接收 第二个是空间大小 
	//	if (ret == NULL)
	//	{
	//		break;
	//	}
	//	printf("%s ", ret);
	//}

	//2.
	//fgetc的作用是用来读取文件里面的每一个字符 利用while打印出来 （txt里面有东西 用r操作） get是得到
	//char c = 'a';
	//while ((c = fgetc(fp)) != EOF)
	//{
	//	printf("%c", c);
	//}
	//printf("...end!\n");

	//1.
	////关闭用 fclose
	////如果不放入路径，只写test.txt 则创建的文本就在当前路径的文件夹里 也就是number.c的路径 put是写入
	//// FILE 作用是放入路径，创建文件
	////因为在双引号内部，所以 \ 就被认为是转义了 所以得用两个\\
	//// w 要是文件里面有test.txt则不创建 要是没有就创建一个 具有写的功能

	//char c = 'a';
	//if (fp == NULL)
	//{
	////创建打开了文件也得关闭文件 
	//	printf("文件输入错误！\n");
	//	return 1;
	//}
	////for (; c <= 'z'; c++)
	////{
	////	fputc(c, fp); //# c fputc的作用是用来给fp中写入c的 传入两个数据 一个是字符的代号  fputc，
	////}					    也可以把fp改成stdout 用来写在显示器里面

	//fputs("abc", fp);  // # s 直接传入数据 直接双引号  fputs

	fclose(fp);

	system("pause");
	return 0;
}