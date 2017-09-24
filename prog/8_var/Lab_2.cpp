#include <iostream>
#include <cmath>
#include <iomanip>
const int NotUsed = system("color F0");
using namespace std;

void function_1(double);
void function_2(double);
void function_3(double);

int main(void) {
	
	double xi, a, b, h,n;
	
	cout << "Enter A = ";
	cin >> a;
	cout << "Enter B = ";
	cin >> b;
	cout << "Enter N = ";
	cin >> n;
	
	for (int i = 0; i <= 69; i++) cout << "-";
	cout << endl;
	
	cout << "| Argument X | "<<"7 * exp(x-4) | " << "pow(2, -x) / abs(x) | " << "pow((x + 10), 5) |\n";
	
	h = (b - a) / n;

	for (int i = 0; i <= n; i++) {
		for (int i = 0; i <= 69; i++) cout << "-";
		cout << endl;
		xi = a + i*h;
		cout << "| " << setw (10)<< fixed << setprecision(3)  << xi << " | ";
		function_1(xi);
		function_2(xi);
		function_3(xi);
		cout << endl;
	};
	
	for (int i = 0; i <= 69; i++) cout << "-";
	cout << endl;
	
	cout <<"|" <<setw(70) << "Passed: Korovii O.C. KB-61 |\n";
	
	for (int i = 0; i <= 69; i++) cout << "-";
	cout << endl;
}

void function_1(double x){
	double y;
	y = 7 * exp(x-4);
	cout << setw(12) <<fixed << setprecision(3)<< y <<" |";
}

void function_2(double x) {
	double y;
	y = pow(2, -x) / abs(x);
	cout << setw(20)<< fixed << setprecision(3)<<y << " |";
}

void function_3(double x){
	double y;
	y = pow((x + 10), 5);
	cout <<setw(17) << fixed << setprecision(3) << y << " |";
}
