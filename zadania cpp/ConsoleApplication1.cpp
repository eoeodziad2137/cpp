#include <iostream>
#include <Windows.h>

using namespace std;

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(int argc, char* argv[])
{
	system("chcp 1250");
	system("cls");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	int a, b, c, d, suma, ciezar, szalkap, szalkal, szczytanie;
	char charact;

	do
	{
		cout << "Podaj wagę pierwszego cięarka: ";
		cin >> a;
		cout << "Podaj wagę drugiego cięarka: ";
		cin >> b;
		cout << "Podaj wagę trzeciego cięarka: ";
		cin >> c;
		cout << "Podaj wagę czwartego cięarka: ";
		cin >> d;
		cout << endl;

		suma = a + b + c + d;
		if (suma != 40)
		{
			cout << "Suma ciearkow nie jest rowna 40!" << endl;
			cout << endl;
		}

	} while (suma != 40);

	cout << endl;

	do
	{
		cout << "Ciezar jaki chcemy zwazyc to: ";
		cin >> ciezar;

		if (ciezar > 40)
		{
			cout << "Za duzy ciezar!" << endl;
		}

	} while (ciezar > 40);

	cout << endl;

	szalkal = 0;
	szalkap = 0;
	szalkap = szalkap + ciezar;
	do
	{
		cout << "Dane" << endl;
		cout << endl;
		cout << "1: " << a << endl;
		cout << "2: " << b << endl;
		cout << "3: " << c << endl;
		cout << "4: " << d << endl;

		cout << endl;

		SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		cout << "UWAGA" << endl;
		cout << "Towar wazymy na szalce prawej " << endl;
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << endl;

		cout << endl;
		cout << "Lewa szalka " << szalkal;
		cout << "         ";
		cout << "Prawa szalka " << szalkap << endl;

		float nciezar = szalkap;

		int c = ((nciezar / 40) * 10) / 2;
		cout << "ciezar " << c;



		gotoxy(80, 16 + c );
		cout << "    " << szalkal;
		gotoxy(80, 17 + c );
		cout << "*********";

		gotoxy(95, 16);
		cout << "    " << szalkap;
		gotoxy(95, 17);
		cout << "*********";

		cout << endl;
		cout << endl;

		cout << "Do ktorej szalki chcesz dodać 'p'(prawa) 'l'(lewa)" << endl;
		cin >> charact;

		charact = tolower(charact);

		cout << "Podaj numer ciezarka ktory chcesz dodac do szalki: ";
		cin >> szczytanie;

		switch (charact)
		{

		case 'l':

			switch (szczytanie)
			{
			case 1:
				szalkal = szalkal + a;
				if (a == 0)
				{
					cout << "Nie mozna dodac ciezarkow ponownie" << endl;
				}
				a = a - a;
				break;
			case 2:
				szalkal = szalkal + b;
				if (b == 0)
				{
					cout << "Nie mozna dodac ciezarkow ponownie" << endl;
				}
				b = b - b;
				break;
			case 3:
				szalkal = szalkal + c;
				if (c == 0)
				{
					cout << "Nie mozna dodac ciezarkow ponownie" << endl;
				}
				c = c - c;
				break;
			case 4:
				szalkal = szalkal + d;
				if (d == 0)
				{
					cout << "Nie mozna dodac ciezarkow ponownie" << endl;
				}
				break;
				d = d - d;
			}
			break;

		case 'p':
			switch (szczytanie)
			{
			case 1:
				szalkap = szalkap + a;
				if (a == 0)
				{
					cout << "Nie mozna dodac ciezarkow ponownie" << endl;
				}
				a = a - a;
				break;
			case 2:
				szalkap = szalkap + b;
				if (b == 0)
				{
					cout << "Nie mozna dodac ciezarkow ponownie" << endl;
				}
				b = b - b;
				break;
			case 3:
				szalkap = szalkap + c;
				if (c == 0)
				{
					cout << "Nie mozna dodac ciezarkow ponownie" << endl;
				}
				c = c - c;
				break;
			case 4:
				szalkap = szalkap + d;
				if (d == 0)
				{
					cout << "Nie mozna dodac ciezarkow ponownie" << endl;
				}
				d = d - d;
				break;
			}

		default:
			break;
		}

		if (szalkal != szalkap)
		{
			system("cls");
		}
		if (szalkal == szalkap)
		{
			cout << endl;
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
			cout << "Brawo - udana proba wazenia" << endl;
		}
	} while (szalkal != szalkap);
}