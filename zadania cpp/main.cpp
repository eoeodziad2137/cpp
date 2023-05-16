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
		cout << "Podaj wagê pierwszego ciêarka: ";
		cin >> a;
		cout << "Podaj wagê drugiego ciêarka: ";
		cin >> b;
		cout << "Podaj wagê trzeciego ciêarka: ";
		cin >> c;
		cout << "Podaj wagê czwartego ciêarka: ";
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
		
		cout<<endl;
		/*cout << "Lewa szalka " << szalkal;
		cout << "         ";
		cout << "Prawa szalka " << szalkap << endl;*/


if(szalkal > szalkap)
{
	
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
		cout << "    " << szalkal<<endl;
		cout << "*********"<<endl;
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout<<endl;
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
		cout <<"			"<<szalkap<<endl;
		cout << "			*********"<<endl;
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
}
else if(szalkap > szalkal)
{
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
		cout << "    			   " << szalkap<<endl;
		cout << "			*********"<<endl;
			SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout<<endl;
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
		cout<<"    " <<szalkal<<endl;
		cout << "*********"<<endl;
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
}
else if(szalkal == szalkap || szalkap == szalkal)
{
	cout<<szalkal<<"    		"<<szalkap<<endl;
	cout<<"*********			*********"<<endl;
}
	
		
		


		cout << endl;
		cout << endl;

		cout << "Do ktorej szalki chcesz dodaæ 'p'(prawa) 'l'(lewa)" << endl;
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
					cout<<endl;
					cout << "Nie mozna dodac ciezarkow ponownie" << endl;
					cout<<endl;
				}
								if(a + b + c + d == 0)
				{
					cout<<endl;
					cout << "Wszystkie ciê¿arki zosta³y u¿yte!" << endl;
					cout<<endl;
				}

				a = a - a;
				break;
			case 2:
				szalkal = szalkal + b;
				if (b == 0)
				{
					cout<<endl;
					cout << "Nie mozna dodac ciezarkow ponownie" << endl;
					cout<<endl;
				}
								if(a + b + c + d == 0)
				{
					cout<<endl;
					cout << "Wszystkie ciê¿arki zosta³y u¿yte!" << endl;
					cout<<endl;
				}
				b = b - b;
				break;
			case 3:
				szalkal = szalkal + c;
				if (c == 0)
				{
					cout<<endl;
					cout << "Nie mozna dodac ciezarkow ponownie" << endl;
					cout<<endl;
				}
								if(a + b + c + d == 0)
				{
					cout<<endl;
					cout << "Wszystkie ciê¿arki zosta³y u¿yte!" << endl;
					cout<<endl;
				}
				c = c - c;
				break;
			case 4:
				szalkal = szalkal + d;
				if (d == 0)
				{
					cout<<endl;
					cout << "Nie mozna dodac ciezarkow ponownie" << endl;
					cout<<endl;
				}
								if(a + b + c + d == 0)
				{
					cout<<endl;
					cout << "Wszystkie ciê¿arki zosta³y u¿yte!" << endl;
					cout<<endl;
				}
				d = d - d;
				break;
				
			}
			break;

		case 'p':
			switch (szczytanie)
			{
			case 1:
				szalkap = szalkap + a;
				if (a == 0)
				{
					cout<<endl;
					cout << "Nie mozna dodac ciezarkow ponownie" << endl;
					cout<<endl;
				}
								if(a + b + c + d == 0)
				{
					cout<<endl;
					cout << "Wszystkie ciê¿arki zosta³y u¿yte!" << endl;
					cout<<endl;
				}
				a = a - a;
				break;
			case 2:
				szalkap = szalkap + b;
				if (b == 0)
				{
					cout<<endl;
					cout << "Nie mozna dodac ciezarkow ponownie" << endl;
					cout<<endl;
				}
								if(a + b + c + d == 0)
				{
					cout<<endl;
					cout << "Wszystkie ciê¿arki zosta³y u¿yte!" << endl;
					cout<<endl;
				}
				b = b - b;
				break;
			case 3:
				szalkap = szalkap + c;
				if (c == 0)
				{
					cout<<endl;
					cout << "Nie mozna dodac ciezarkow ponownie" << endl;
					cout<<endl;
				}
								if(a + b + c + d == 0)
				{
					cout<<endl;
					cout << "Wszystkie ciê¿arki zosta³y u¿yte!" << endl;
					cout<<endl;
				}
				c = c - c;
				break;
			case 4:
				szalkap = szalkap + d;
				if (d == 0)
				{
					cout<<endl;
					cout << "Nie mozna dodac ciezarkow ponownie" << endl;
					cout<<endl;
				}
								if(a + b + c + d == 0)
				{
					cout<<endl;
					cout << "Wszystkie ciê¿arki zosta³y u¿yte!" << endl;
					cout<<endl;
				}
				d = d - d;
				break;
			}

		default:

			break;
		}

		if (szalkal == szalkap)
		{
			cout << endl;
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
			cout << "Brawo - udana proba wazenia" << endl;
		}
	} while (szalkal != szalkap);
}
