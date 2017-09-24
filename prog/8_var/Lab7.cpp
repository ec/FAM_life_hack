#include <iostream>
#include <windows.h>
#include "Header.h"
#include <conio.h>
POINT op;
HWND hWnd = GetConsoleWindow();
HDC hDC = GetDC(hWnd);
int i = 0;

RECT clientRect; // координаты прямоугольника

void d3(int x) {
	i = 0;
	MoveToEx(hDC, 100, 10, &op);
	SetConsoleTextAttribute(hStdOut, BACKGROUND_RED |
		BACKGROUND_GREEN | BACKGROUND_BLUE);
	system("CLS");

	
	for (int j = 0; j <= x; j++) {
		if(j==10) SelectObject(hDC, GetStockObject(BLACK_PEN));
		
		do {

			MoveToEx(hDC, 100 + j + i, 10 + j, &op);
			LineTo(hDC, 100 + i + j, 200 + j);
			i++;
		} while (i < 10);
		i = 0;

		do {

			MoveToEx(hDC, 100 + j, 10 + i + j, &op);
			LineTo(hDC, 150 + j, 10 + i + j);
			i++;
		} while (i < 10);

		i = 0;

		do {

			MoveToEx(hDC, 100 + j, 200 + j + i, &op);
			LineTo(hDC, 150 + j, 200 + j + i);
			i++;

		} while (i < 10);

		i = 0;

		do {

			MoveToEx(hDC, 100 + j, 100 + j + i, &op);
			LineTo(hDC, 150 + j, 100 + j + i);
			i++;

		} while (i < 20);



		i = 0;

		do {
			Arc(hDC, 200 + j - i, 110 + j - i, 100 + j + i, 10 + j + i, 150 + j, 110 + j - i, 150 + j, 10 + j + i);

			i++;
		} while (i < 10);

		i = 0;

		do {
			Arc(hDC, 200 + j - i, 210 + j - i, 100 + j + i, 110 + j + i, 150 + j, 210 + j - i, 150 + j, 110 + j + i);

			i++;
		} while (i < 10);
		if (j == 10) {
			i = 0;
			do {

				MoveToEx(hDC, 100 + 10 + i, 10 + 10, &op);
				LineTo(hDC, 100 + i + 10, 200 + 10);
				i++;
			} while (i < 10);
		}
	}
	


}



int main() {
	
	GetClientRect(hWnd, &clientRect);
	SelectObject(hDC, GetStockObject(WHITE_PEN));
	int x=2;
	cout << "Choice number:\n1.2D\n2.3D\nor q to exit the program" << endl;
	
	while (cin >> x){ 
		
		
		switch (x)
		{
		case 1: {

			d3(1);
			
			break;
		}
		case 2:
		{	
			d3(10); 
			break;
		}
		default:
			break;
		}
	}
	ReleaseDC(hWnd, hDC);

	return 0;
}