#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    char cn;

    cout << "Podaj pierwszą litere od ktorej rozpoczyna sie nazwa sąsiada Polski" << endl;

    cin >> cn;

    cn = tolower(cn);

    switch (cn)
    {
    case 'n':
        cout << "Niemcy" << endl;
        break;
    case 'c':
        cout << "Czechy" << endl;
        break;
    case 's':
        cout << "Słowacja" << endl;
        break;
    case 'u':
        cout << "Ukraina" << endl;
        break;
    case 'b':
        cout << "Białoruś" << endl;
        break;
    case 'l':
        cout << "Litwa" << endl;
        break;
    case 'r':
        cout << "Rosja" << endl;
        break;
    default:
        cout << "Ten kraj nie ma granicy z Polską!" << endl;
    }
}