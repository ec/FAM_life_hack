#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
setlocale(LC_CTYPE, "ukr");//��������� ��������� ����;
int m;
cout<<"m = ";
cin>>m;
if (m>0 && m<=27 )//������ ���������, ��� �����, ���� ���� ���� �� ������� �������������� �����;
{
cout<<"�����, ���� ���� ���� ���i���� "<<m<<":"<<endl;

for(int i = 1; i<10; i++)//���������, �� ���������� �����;
for(int j = 0; j<10; j++)
for(int k = 0; k<10; k++)
{
    if((i+j+k)==m)//�������� ��� ���� ����;
    {
        cout<<i<<j<<k<<";"<<setw(2);
    }
}
}
else
{
  cout<<"�� i��� ������������ ����������� �����, ���� ���� ���� ���i���� "<<m<<"."<<endl;
}
return 0;
}
