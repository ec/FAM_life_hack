#include <iostream>

using namespace std;

int main()
{
    setlacale (LC_ALL,"rus");
    const int f = 6;
    int kop[f] = {1, 2, 5, 10, 25, 50};
    int n, k, i, p;
    cout<<"¬ведите число монет: ";
    cin>>n;
    p=n;
    k=0;
    i=f-1;
    do
    {
      if(n>=kop[i])//50
      {
          k++;
          n = n- kop[i];
      }
      else
      {
            i--;
            if(n>=kop[i])//25
            {
                k++;
                n = n - kop[i];
            }
            else
            {
                i--;
                if(n>=kop[i])//10
                {
                    k++;
                    n = n - kop[i];
                }
                else
                {
                    i--;
                    if(n>=kop[i])//5
                    {
                        k++;
                        n = n - kop[i];
                    }
                    else
                    {
                        i--;
                        if(n>=kop[i])//2
                        {
                            k++;
                            n = n - kop[i];
                        }
                        else
                        {
                            i--;
                            if(n>=kop[i])//1
                            {
                                k++;
                                n=n-kop[i];
                            }
                        }
                    }
                }
            }
      }
    }while(n!=0);
    cout<<p<<" ћонет можно сложить с "<<k<<" копеек,что есть самым маленьким количеством копеек";
    return 0;
}
