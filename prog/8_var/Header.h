#pragma once
struct student
{
	char surname[100];
	char name[100];
	char father_name[100];
	int sda;
	int programing;
	int matan;
	int LA;
	char email[100];
};
void dataenter(student* px, const int  n);
void dataout(student* px, const int  i);