# include <string.h>
#include <iostream>
#include <time.h>
#include <stdio.h>   //äëÿ ñòàíäàðòíûõ ââîäà âûâîäà
#include <windows.h> // äëÿ HANDLE, êóðñîðà, öâåòà, sleep()
#include <conio.h>   //äëÿ kbhit, getch
using namespace std;

HANDLE hConsole;    //HANDLE hStdout
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);  // ïîëó÷åíèå äåñêðèïòîðà óñòðîéñòâà ñòàíäàðòíîãî âûâîäà



void gotoxy(int X, int Y)
{
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);  //ôóíêöèÿ ïðåìåùåíèÿ êóðñîðà ïî Õ è Ó
}



void SetColor(int text, int background)
{
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text)); //çàäà¸ì àòðèáóòû äëÿ øðèôòà è öâåòà ñèìâîëîâ â êîíñîëè
}
short regim;

void frame(int x1, int y1, int x2, int y2) //maluje ramku
{
	int i;
	gotoxy(x1, y1);
	cout << '\311';;// ¢¥àå­?© «?¢¨© ªãâ®ç®ª
	for (i = (x1 + 1); i <= (x2 - 1); i++) cout << '\315';// ¯®¤¢?©­  £®à¨§®­â «ì
	cout << '\273';// ¯à ¢¨© ¢¥àå­?© ªãâ®ç®ª
	for (i = (y1 + 1); i <= (y2 - 1); i++)
	{
		gotoxy(x1, i);
		cout << '\272';// ¯®¤¢?©­  ¢¥àâ¨ª «ì­
		gotoxy(x2, i);
		cout << '\272';
	}
	gotoxy(x1, y2);
	cout << '\310';
	for (i = (x1 + 1); i <= (x2 - 1); i++)
		cout << '\315';// ¯®¤¢?©­  £®à¨§®­â «ì
	cout << '\274';// ¯à ¢¨© ­¨¦­?© ªãâ®ç®ª
	return;
} //frame


void zastavka()
{
	system("cls");
	frame(10, 5, 70, 18);
	gotoxy(34, 8);  cout << "Kursova robota" << endl;
	gotoxy(33, 10); cout << "z programuvannja" << endl;
	gotoxy(35, 12); cout << "variant 13" << endl;
	gotoxy(35, 17); cout << "Kyiv 2016" << endl;
	
	system("cls");
	return;
} // zastavka


int vert_menu(int k1, int k2, int kp)
{
	const int kilk = 4; // ª?«ìª?áâì ¯ã­ª?â¢ ¬¥­î
	typedef   char punkt[17];
	punkt m[kilk] = { "1. View Base  ", "2. Add record ", "3. Delete record", "4. Exit" };
	short   i, t;
	char ch;
	int       flag; // bool

	flag = 1;// true
	t = strlen(m[0]);
	for (i = 1; i<kp; i++)
		if (strlen(m[i])>t) t = strlen(m[i]);

	frame(k1 - 1, k2, k1 + t, k2 + kp + 1);
	for (i = 0; i<kp; i++)
	{
		if (i == 0) SetColor(0, 7);
		else SetColor(7, 0);
		gotoxy(k1, k2 + i + 1);
		cout << (m[i]);
	}// for

	gotoxy(15, 12);
	SetColor(7, 0);
	cout << "Z dopomogoju q ta a vyberit regim ta natysnit enter " << endl;
	SetColor(7, 0);
	i = 0;
	ch = cin.get();
	while (flag != 0)
	{
		if (ch == '\15') { flag = 0; return i; }
		if (ch == '\161')
		{
			gotoxy(k1, k2 + i + 1);  SetColor(7, 0);
			cout << m[i];
			i++;
			if (i == kp)
			{
				i = 0;
				SetColor(7, 0);
				gotoxy(k1, k2 + i + 1); SetColor(0, 7);
				cout << m[i];
			}// if
			gotoxy(k1, k2 + i + 1); SetColor(0, 7);
			cout << m[i]; SetColor(7, 0);

		}
		if (ch == '\141')
		{
			gotoxy(k1, k2 + i + 1); SetColor(7, 0);
			cout << m[i];
			i--;
			if (i<0) {
				i = kp - 1;
				SetColor(7, 0);
				gotoxy(k1, k2 + i + 1); SetColor(0, 7);
				cout << m[i];
			}


			gotoxy(k1, k2 + i + 1);  SetColor(0, 7);
			cout << m[i];    SetColor(7, 0);
		} // case 110

		ch = cin.get();
	}// while
	return i;
}// vert menu

void view_b()
{
	
}

void add_q()
{
	
}

void delete_q()
{
	
}

int main()
{
	system("cls");
	zastavka();
	while (1)
	{
		system("cls");
		gotoxy(35, 4); cout << "MAIN MENU";
		regim = vert_menu(32, 5, 4);

		switch (regim)
		{
		case 0: view_b; break;
		case 1: add_q; break;
		case 2: delete_q; break;
		case 3: { system("cls");
			return 0; }
		} //switch
	} // while;
	return 0;
} // main
