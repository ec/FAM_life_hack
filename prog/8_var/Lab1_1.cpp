#include <iostream>
#include <cmath>
#include <iomanip>
const int NotUsed = system("color F0");
using namespace std;


int main(){

	double  x, y, z,//Заданні дійсні числа
		a, b;//Шуканні змінні
	
	cout << "Enter x = ";
	cin >> x;
	cout << "Enter y = ";
    cin >> y;
	cout << "Enter z = ";
	cin >> z;

					   //виконуєм перевірку ОДЗ формули а
	if (z == 1) cout << "Not found A" << endl;
	else if (z == 2) cout << "Not found A" << endl;
	else {
		a = 1 + x + (x * x) / (z - 1) + (x*x*x) / (z - 2);
		cout << "a = ";
		cout << fixed << setprecision(3) << a << endl;
	}
	                  //виконуєм перевірку на ОДЗ формули b
	if (y <= 2) cout << "Not found B" << endl;
	else if (((x / 2) + (sin(z))*(sin(z))) == 0) cout << "Not found B" << endl;//перевіряєм чи знаменник дорівнює нулю
		else {
			b = (1 + log(y - 2)) / (x / 2) + (sin(z))*(sin(z));
			cout << "b = ";
			cout << fixed << setprecision(3) << b << endl;
		}	
	return 0;
}