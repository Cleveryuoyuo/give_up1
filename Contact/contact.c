#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"


static int IsFull(contact_t* ct)
{
	assert(ct);
	return ct->size == ct->pag;
}

static int IsExist(contact_t* ct, const char* tel)
{
	assert(ct);
	int tp = 0; //这个人在结构体组中的下标 the person
	person_t *end = ct->persons + ct->size;
	for (person_t* p = ct->persons; p < end; p++,tp++)
	{
		if (0 == strcmp(p->tel, tel))
			return tp;
		//如果存在 返回下标 在删人的时候使用
		//下标肯定>= 0
	}
	return -1;
}

static int Comper(const void ** a, const void ** b)
{
	char* str1 = (char*)*a;
	char* str2 = (char*)*b;
	int ret = strcmp(*str1, *str2);

	return ret;
}


void AddPerson(contact_t* ct)
{
	assert(ct);
	if (IsFull(ct))
	//判断通讯录满了没有
	{
		printf("coontact is full\n");
		return;
	}
	person_t* p = ct->persons + ct->size;
	//用p接收最后一个人信息所在位置的下一个位置
	printf("姓名# ");
	scanf(" %s", p->name);
	printf("性别# ");
	scanf(" %s", &(p->sex));
	printf("年龄# ");
	scanf(" %d", &(p->age));
	printf("电话# ");
	scanf(" %s", p->tel);
	if (IsExist(ct, p->tel) >= 0)
	//判断这个人存在否
	{
		printf("The persion is not exist\n");
		return;
	}
	printf("住址# ");
	scanf(" %s", p->adress);
	ct->size += 1;
	//因为人多了一个 统计的元素size加1
	printf(" add success!\n");
}

void DelPerson(contact_t* ct)
{
	assert(ct);
	char tel1[NUM];
	printf("请输入你要删除人的电话号码: > ");
	scanf("%s", tel1);
	int sub = 0;
	if ((sub = IsExist(ct, tel1)) >= 0)
	//IsExist返回的是元素的下标 将他给sub
	{
		//删人
		ct->persons[sub] = ct->persons[ct->size - 1];
		ct->size -= 1;
		//将最后一个人的位置的信息赋值给要删除的人的位置
		//人少了一个，所以size-1；
		printf("Delet success!\n");
	}
	else
	{
		printf("The person is not exist!\n");
	}
}

void SearchPerson(contact_t* ct)
{
	char tel2[NUM];
	printf("请输入你要查找人的电话号:> ");
	scanf("%s", &tel2);
	int sub = IsExist(ct, tel2);
	if (sub < 0)
	{
		printf("The person is not exist!\n");
	}
	else
	{
		person_t p = ct->persons[sub];
		printf("|%-6s|%-3s|%-3d|%-8s|%-8s|\n", p.name,p.sex,p.age,p.tel,p.adress);
	}

}

void ModPerson(contact_t* ct)
{
	char tel3[NUM];
	printf("请输入你要修改人的电话:> ");
	scanf(" %s", tel3);
	int sub = IsExist(ct, tel3);
	person_t p = ct->persons[sub];
	if (sub < 0)
	{
		printf("这个人不存在，结束程序！\n");
		return 0;
	}

	printf("这个人是:> \n");
	printf("|%-6s|%-3s|%-3d|%-8s|%-8s|\n", p.name, p.sex, p.age, p.tel, p.adress);
	int select = 0;
	printf("\n");
	printf("#############################\n");
	printf("## 1. 姓名        2. 性别  ##\n");
	printf("## 3. 年龄        4. 电话  ##\n");
	printf("## 5. 住址        0. 退出  ##\n");
	printf("#############################\n");

	printf("请选择要修改人的信息:> ");
	scanf("%d", &select);

	if (select == 0)
	{
		printf("程序退出！\n");
		return;
	}
	while (select > 5 || select < 0)
	{
		printf("选择错误，请重新选择");
		scanf("%d", &select);
	}
	switch (select)
	{
	case 1:
		printf("请输入要修改的名字:> ");
		scanf(" %s", ct->persons[sub].name);
		break;
	case 2:
		printf("请输入要修改的性别:> ");
		scanf(" %s", ct->persons[sub].sex);
		break;
	case 3:
		printf("请输入要修改的年龄:> ");
		scanf(" %d", &ct->persons[sub].age);
		break;
	case 4:
		printf("请输入要修改的电话:> ");
		scanf(" %s", ct->persons[sub].tel);
		break;
	case 5:
		printf("请输入要修改的住址:> ");
		scanf(" %s", ct->persons[sub].adress);
		break;
	default:
		break;
	}

}

void ShowPerson(contact_t* ct)
{
	assert(ct);
	person_t *end = ct->persons + ct->size; 
	//用person_t 类型的指针变量end接收最后一个人的信息位置
	printf("----------------------------------\n");
	for (person_t* p = ct->persons; p < end; p++)
	//利用循环把p从头到尾遍历一遍 打印所有人的信息
	{
		printf("|%-6s|%-3s|%-3d|%-8s|%-8s|\n", p->name, p->sex, p->age, p->tel, p->adress);
	}
	printf("----------------------------------\n");
}

void ClsContact(contact_t* ct)
{
	ct->size = 0;
	printf("清空结束!\n");
}

void SortContact(contact_t* ct)
{
	//按姓名排序

	qsort(ct->persons, ct->size, sizeof(person_t), Comper);

}
