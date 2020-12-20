#define _CRT_SECURE_NO_WARNINGS 1

#ifndef __CONTACT_H__
#define __CONTACT_H__


#include<stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define NUM  128
#define TOTAL 1000

typedef struct person
{
	char name[NUM];
	char sex[NUM];
	int age;
	char tel[NUM];
	char adress[NUM];
}person_t;

typedef struct contact
{
	int pag;
	int size;
	person_t persons[TOTAL];
}contact_t;

void AddPerson(contact_t* ct);
void DelPerson(contact_t* ct);
void SearchPerson(contact_t* ct);
void ModPerson(contact_t* ct);
void ShowPerson(contact_t* ct);
void ClsContact(contact_t* ct);
void SortContact(contact_t* ct);


#endif
