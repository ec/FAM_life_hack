#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
const int N_max = 100;
int dobut(int *px, int, int );

int main() {
	
	int A[N_max][N_max]={ 0 };
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j<n; j++) {
			cin >> A[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) cout << dobut(&A[0][0],i, n) << " ";
	cout << endl;
	return 0;
}

int  dobut(int* px , int i, int m)
{
	int s = 0;
	
	int x = *(px+i*m); int p = 0;
	for (int k = 1; k < m; k++)
	{
		if (x > *(px + m*i+k) ) { x = *(px+ m*i +k); p = k; }
	}

	for (int j = 0; j < m; j++) {
			s += *(px + m*i + j) * (*(px + m*j + p));
	}
		return s;
}
