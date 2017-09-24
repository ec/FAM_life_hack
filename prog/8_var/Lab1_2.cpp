#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
	int const n = 6;
	int A[n][n];
	int min, num;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			A[i][j] = i*(abs(j - 5) - 3) + j*(abs(i - 4) + 2);
		};
	};
	cout << "----------------------" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << "----------------------" << endl;
	min = A[0][0];
	for (int i = 1; i < n; i++) { //номер стовпця, в якому знаходиться перший мінімальний елемент головної діагоналі матриці 
		if (min > A[i][i]) {
			min = A[i][i];
			num = i;
		}
	}

	int temp; // временная переменная для обмена элементов местами 
	int X[n];
	// Сортировка массива пузырьком 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (A[j][num] > A[j + 1][num]) {
				temp = A[j][num];
				A[j][num] = A[j + 1][num];
				A[j + 1][num] = temp;
			}
		}
	}

	// Вывод отсортированного массива на экран 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
		return 0;
	}
}

