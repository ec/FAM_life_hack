#include <iostream>
using namespace std;
int main()
{
    setlocale( LC_ALL,"Ukrainian" ); //Підкючення української мови
    int i1,i2,i3,i4,i5,i6,k,n;
    cout<<" Введiть суму(коп) "<<endl;
    cin>>n;
    if((n>=1)&&(n<=99)){
        k=0;
        for(i1=0;i1<100;i1++)
            for(i2=0;i2<50;i2++)
                for(i3=0;i3<20;i3++)
                    for(i4=0;i4<10;i4++)
                        for(i5=0;i5<4;i5++)
                            for(i6=0;i6<2;i6++)
                                if(1*i1+2*i2+5*i3+10*i4+25*i5+50*i6==n)
                                    k++;
        cout<<" Можлива кiлькiсть виплат "<<k<<endl;
    }
    else
        cout<<"Некоректна сума(коп)";
    return 0;
}
