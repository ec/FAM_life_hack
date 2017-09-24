#include <iostream>
using namespace std;
void zapovnenia(int mas[], int n)
{
    for(int i=0;i<n;i++)
        mas[i]=i+1;
}
void vuvedenia(int mas[], int n, char k)
{
    for(int i=0;i<n;i++){
        cout<<k<<"["<<i<<"] = "<<mas[i]<<", ";
    }
    cout<<endl<<endl;
}
int znahodzenianuliv(int mas[], int n, char m)
{
    int k;
    int chislonuliv=0;
    for(int i=0;i<n;i++){
        if(mas[i]==0){
            k=1;
            for(int j=i+1;j<n;j++){
                if(mas[j]==0)
                    k++;
                else
                    break;
            }
            if(k>chislonuliv)
                chislonuliv=k;
        }
    }
    cout<<"chislonuliv y "<<m<<" = "<<chislonuliv<<endl;
return chislonuliv;
}
int main()
{
    int A[3],B[4],C[5];
    zapovnenia(A,3);
    zapovnenia(B,4);
    zapovnenia(C,5);
    vuvedenia(A,3,'A');
    vuvedenia(B,4,'B');
    vuvedenia(C,5,'C');
    znahodzenianuliv(A,3,'A');
    znahodzenianuliv(B,4,'B');
    znahodzenianuliv(C,5,'C');
    return 0;
}


