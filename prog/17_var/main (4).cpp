#include<iostream>
#include<conio.h>
#include<iomanip>
#include <cstring>
#include<string.h>
#include <fstream>
#include <clocale>
using namespace std;
struct students
{
	char name[50];
	char pr[50];
	char po[50];
	int SDA;
	int Prog;
	int Math;
	int Lin;
	double sered;
    long mob;
	long d;
	long icq;
};
students person[28];

    int size_()
    {
        char buff[255];
        ifstream fin("text.txt");
        int i=0;
        while(!fin.getline(buff, 255).eof())
        {
            i++;
        }
        fin.close();
    return i;
    }

void Zap(int r)
{
	ifstream fin("text.txt");
	for(int i=0;i<r;i++)
	{
		fin>>person[i].pr;
		fin>>person[i].name;
		fin>>person[i].po;
		fin>>person[i].SDA;
		fin>>person[i].Prog;
		fin>>person[i].Math;
		fin>>person[i].Lin;
		fin>>person[i].mob;
		fin>>person[i].d;
		fin>>person[i].icq;
	}
	fin.close();
}
void ser(int r)
{
	for(int i=0;i<r;i++)
	{
		person[i].sered = (person[i].Lin + person[i].SDA +
                     + person[i].Math + person[i].Prog) / 4.0;
	}
}
void poisk(int r)
{
	for(int i=0;i<r;i++)
        if((person[i].mob>0)&&(person[i].d>0)&&(person[i].icq>0)){
			cout<<person[i].pr<<"  "<<person[i].name<<"  ";
            cout<<person[i].po<<" - 0"<<person[i].mob<<",  ";
            cout<<person[i].d<<", "<<person[i].icq<<";  "<<endl;
        }
	cout << endl;
}


int main()
{
	int k=size_()+1;
	Zap(k);
	ser(k);
	cout<<"Students, who have mobile, home phone and icq"<<endl<<endl;
	poisk(k);
	_getch();
	return 0;
}
