#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
   string str;
   getline(cin,str);
   int i=0;
   int k=0;
   int pos;
   bool flag;
   while(i<str.length()){
        if(isalpha(str[i])){
            pos=i;
            flag=false;
            while(isalpha(str[i+1])){
                if(str[i+1]==str[pos]){
                    str.insert(i+1,2,' ');
                    str[i+1]='Y';
                    str[i+2]='E';
                    str[i+3]='S';
                    i+=2;
                    flag=true;
                }
                i++;
                if(str[i]==' ')
                    break;
            }
            if(flag==false){
                    str.insert(pos,1,' ');
                    str[pos]='N';
                    str[pos+1]='O';
                    i+=1;
            }
        }
        i++;
   }
   cout<<str;
   return 0;
}
