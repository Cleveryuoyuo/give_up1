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
	int tp = 0; //������ڽṹ�����е��±� the person
	person_t *end = ct->persons + ct->size;
	for (person_t* p = ct->persons; p < end; p++,tp++)
	{
		if (0 == strcmp(p->tel, tel))
			return tp;
		//������� �����±� ��ɾ�˵�ʱ��ʹ��
		//�±�϶�>= 0
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
	//�ж�ͨѶ¼����û��
	{
		printf("coontact is full\n");
		return;
	}
	person_t* p = ct->persons + ct->size;
	//��p�������һ������Ϣ����λ�õ���һ��λ��
	printf("����# ");
	scanf(" %s", p->name);
	printf("�Ա�# ");
	scanf(" %s", &(p->sex));
	printf("����# ");
	scanf(" %d", &(p->age));
	printf("�绰# ");
	scanf(" %s", p->tel);
	if (IsExist(ct, p->tel) >= 0)
	//�ж�����˴��ڷ�
	{
		printf("The persion is not exist\n");
		return;
	}
	printf("סַ# ");
	scanf(" %s", p->adress);
	ct->size += 1;
	//��Ϊ�˶���һ�� ͳ�Ƶ�Ԫ��size��1
	printf(" add success!\n");
}

void DelPerson(contact_t* ct)
{
	assert(ct);
	char tel1[NUM];
	printf("��������Ҫɾ���˵ĵ绰����: > ");
	scanf("%s", tel1);
	int sub = 0;
	if ((sub = IsExist(ct, tel1)) >= 0)
	//IsExist���ص���Ԫ�ص��±� ������sub
	{
		//ɾ��
		ct->persons[sub] = ct->persons[ct->size - 1];
		ct->size -= 1;
		//�����һ���˵�λ�õ���Ϣ��ֵ��Ҫɾ�����˵�λ��
		//������һ��������size-1��
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
	printf("��������Ҫ�����˵ĵ绰��:> ");
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
	printf("��������Ҫ�޸��˵ĵ绰:> ");
	scanf(" %s", tel3);
	int sub = IsExist(ct, tel3);
	person_t p = ct->persons[sub];
	if (sub < 0)
	{
		printf("����˲����ڣ���������\n");
		return 0;
	}

	printf("�������:> \n");
	printf("|%-6s|%-3s|%-3d|%-8s|%-8s|\n", p.name, p.sex, p.age, p.tel, p.adress);
	int select = 0;
	printf("\n");
	printf("#############################\n");
	printf("## 1. ����        2. �Ա�  ##\n");
	printf("## 3. ����        4. �绰  ##\n");
	printf("## 5. סַ        0. �˳�  ##\n");
	printf("#############################\n");

	printf("��ѡ��Ҫ�޸��˵���Ϣ:> ");
	scanf("%d", &select);

	if (select == 0)
	{
		printf("�����˳���\n");
		return;
	}
	while (select > 5 || select < 0)
	{
		printf("ѡ�����������ѡ��");
		scanf("%d", &select);
	}
	switch (select)
	{
	case 1:
		printf("������Ҫ�޸ĵ�����:> ");
		scanf(" %s", ct->persons[sub].name);
		break;
	case 2:
		printf("������Ҫ�޸ĵ��Ա�:> ");
		scanf(" %s", ct->persons[sub].sex);
		break;
	case 3:
		printf("������Ҫ�޸ĵ�����:> ");
		scanf(" %d", &ct->persons[sub].age);
		break;
	case 4:
		printf("������Ҫ�޸ĵĵ绰:> ");
		scanf(" %s", ct->persons[sub].tel);
		break;
	case 5:
		printf("������Ҫ�޸ĵ�סַ:> ");
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
	//��person_t ���͵�ָ�����end�������һ���˵���Ϣλ��
	printf("----------------------------------\n");
	for (person_t* p = ct->persons; p < end; p++)
	//����ѭ����p��ͷ��β����һ�� ��ӡ�����˵���Ϣ
	{
		printf("|%-6s|%-3s|%-3d|%-8s|%-8s|\n", p->name, p->sex, p->age, p->tel, p->adress);
	}
	printf("----------------------------------\n");
}

void ClsContact(contact_t* ct)
{
	ct->size = 0;
	printf("��ս���!\n");
}

void SortContact(contact_t* ct)
{
	//����������

	qsort(ct->persons, ct->size, sizeof(person_t), Comper);

}
