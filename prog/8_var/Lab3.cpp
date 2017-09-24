#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const int N_Max = 100;
double Mas[N_Max][N_Max];
double sortMas[N_Max][N_Max];
double evector[N_Max];
double product = 1.0;
bool sortbool = true;
int n;
const int NotUsed = system("color F0");
void dataentry();
void Sort1();
void enterVector();
void P_function();
void out();
void comparison();
	

int main(void){
	 
	cout << "Enter n = ";
	cin >> n;
	dataentry();
	Sort1();
	comparison();
	enterVector();
	P_function();
	out();
	return 0;
}

void dataentry()
{
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			Mas[i-1][j-1] = 2.89 / (i + j) + 4.75*(2 * j - 6);
	}
}

void Sort1()
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			sortMas[i][j] = Mas[i][j];
	}; 

	double key; int i;
	for (int k = 0; k < n; k++) {
		for (int j = 1; j <= n-1; j++) {
			key = sortMas[k][j];
			i = j - 1;
			while ((i >= 0) && (sortMas[k][i] < key)&& (sortMas[k][i]>0) ) {
				double tmp = sortMas[k][i + 1];
				sortMas[k][i+1] = sortMas[k][i];
				sortMas[k][i] = tmp;
				i -= 1;
			}
			sortMas[k][i+1] = key;
		};
	};
}

void enterVector()
{  
	int j = 0;
	for (int i = n-1; i >= 0; i--) {
		evector[j] = sortMas[j][i];
		j++;
	}
}

void P_function()
{
	
	for (int i = 0; i < n-1; i++) {
		product = product*(1.0 /( abs(evector[i])) + evector[i + 1]);
	}

}

void comparison()
{
	int k=0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			if (sortMas[i][j] == Mas[i][j]) k++;
		if (k == (n*n)) sortbool = false;
	}
}

void out()
{
	cout << " Matrix A: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << setw(10) << fixed << setprecision(5)<< Mas[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	if (sortbool) {
		cout << "Changing Matrix A:" << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				cout << setw(10) << fixed << setprecision(5) << sortMas[i][j] << " ";
			cout << endl;
		}
	}
	cout << "\nVector X: " << endl;
	for (int i = 0; i < n; i++) cout << setw(10) << fixed << setprecision(5) << evector[i] << " ";
	cout << endl;	
	cout << "\nProduct = " << product << endl << endl;
}
