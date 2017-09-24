#include <iostream>
#include <cmath>
#include <windows.h>

const int NotUsed = system( "color F0" );

using namespace std;
int main()
{  double a, b, x, y, z;
             // Введення даних //
   cout << " Enter x " << endl;
   cin >> x;
   cout << " Enter y " << endl;
   cin >> y;
   cout << " Enter z " << endl;
   cin >> z;
              // Обчислення прикладу а //
    if ( x <= 0) {
         cout << " Error x " <<endl;}
    else {
        if ( x >= 1 ) {
            if ( y > -5/3 ) {
                    cout << " Error y " << endl; }
            else {
                a = sqrt(10*(exp(1/3*log(x))- exp((y+2)*log(x))));
                    cout << " a = " << a << endl; }   }
        else {
            if ( y < -5/3 ) {
                    cout << " Error y " << endl;}
            else {
                a = sqrt(10*(exp(1/3*log(x))- exp((y+2)*log(x))));
                    cout << " a = " << a << endl; }
        }
        }
                      // Обчислення прикладу b //
    if ( z < -1 ) {
         cout << " Error z " <<endl;}
    else {
         if ( z > 1 ) {
            cout << " Error z " <<endl;}
         else {
             if ( cos(x + y) == 0 ) {
                cout << " Error x+y " <<endl;}
             else {
                 b = ( asin(z)) * ( asin(z)) + tan(abs( x + y ));}
                    cout << " b = " << b <<endl;
         }
         }
        return 0;

}

