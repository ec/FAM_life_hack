#include <iostream>
using namespace std;
int main()
{
int m,k,s,i,j;
int a[800];
int b[800];
int c[800];
k=0;
for (i=200;i<=1000;i++){
        s=0;
        a[k]=i;
    for(j=1;j<i;j++){
        if (a[k]%j==0){
            s=s+j;
        }
    }

  b[k]=s;
  m=0;
  for(j=1;j<b[k];j++){
    if (b[k]%j==0){
        m=m+j;
    }
  }
c[k]=m;
  if ((b[k]>=200)&&(b[k]<=1000)&&(c[k]==a[k])&&(a[k]<b[k])){
     cout<<a[k]<<"  "<<b[k]<<endl;

  }
k++;
}
    return 0;
}
