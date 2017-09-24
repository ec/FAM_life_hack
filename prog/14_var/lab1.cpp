#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, x, y, z;
    cout <<"vvedit x: "; //Вводимо числа
    cin >>x;
    cout <<"vvedit y: ";
    cin >>y;
    cout <<"vvedit z: ";
    cin >>z;
        if (1-x*x*y*y==0) {                     // Умови неіснування прикладу "А"
        cout <<"priklad a ne vikonuetsa"<< endl;
        }
            else if ((x-((2*y)/(1-x*x*y*y)))==0) {
            cout <<"priklad a ne vikonuetsa"<< endl;
        }
            else { a=((1+((sinh(x+y))*(sinh(x+y))))/(fabs(x-((2*y)/(1-x*x*y*y))))); //Обчислення прикладу "А"
            cout <<"a="<<a<< endl;
        }
        if (z==0) {                         // Умова неіснування прикладу "В"
            cout <<"priklad b ne vikonuetsa"<< endl;
        }
            else{ b=(cos(atan(1/z)))*(cos(atan(1/z))); // Обчислення прикладу "В"
            cout <<"b="<<b<< endl;
        }
    return 0;
}
