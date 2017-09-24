#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
setlocale(LC_CTYPE, "ukr");//підключаємо українську мову;
int m;
cout<<"m = ";
cin>>m;
if (m>0 && m<=27 )//робимо обмеження, для чисел, сума цифр яких не дорівнює трьохцифровому числу;
{
cout<<"Числа, сума цифр яких дорiвнює "<<m<<":"<<endl;

for(int i = 1; i<10; i++)//лічильники, що перевіряють цифри;
for(int j = 0; j<10; j++)
for(int k = 0; k<10; k++)
{
    if((i+j+k)==m)//перевірка для суми цифр;
    {
        cout<<i<<j<<k<<";"<<setw(2);
    }
}
}
else
{
  cout<<"Не iснує трьохзначних натуральних чисел, сума цифр яких дорiвнює "<<m<<"."<<endl;
}
return 0;
}
