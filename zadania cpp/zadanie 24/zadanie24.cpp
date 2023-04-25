#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    int a, b, c;
    int opcja;

    // system("color 8");
    cout << "\033[1;37m";//kolor

    cout << "Umiem obliczac pole trojkata oraz promien kola wpisanefo lub opisanego w trojkacie" << endl;
    cout << "Po podaniu dlugosci bokow trojkata" << endl;
    cout << "Umiem sprawdzic wczytane dane" << endl;
    cout << "Musisz wyprac opcje" << endl;

    cout << "************************************************" << endl;

    cout << "1-pole trojkata" << endl;
    cout << "2-promiec kola opisanego na trojkacie" << endl;
    cout << "3-promiec kola wpisanego w trojkat" << endl;

    cout << "************************************************" << endl;

    do
    {

        cout << "Podaj opcje" << endl;
        cin >> opcja;

    } while ((opcja != 1) && (opcja != 2) && (opcja != 3));

    cout << endl;

    cout << "\033[0m";

    do
    {
        do
        {

            cout << "Podaj Długość boku A w centymetrach" << endl;
            cin >> a;
            cout << endl;

            cout << "Podaj Długość boku B w centymetrach" << endl;
            cin >> b;
            cout << endl;

            cout << "Podaj Długość boku C w centymetrach" << endl;
            cin >> c;
            cout << endl;

            if (a + b < c || b + c < a || a + c < b)
            {
                cout << "\033[31m";//kolor
                cout << "Boki nie tworzą trojkata" << endl;
                cout << "\033[0m";
            }
            else
            {
                cout << "\033[32m";//kolor
                cout << "Boki tworzą trojkat" << endl;
                cout << "\033[0m";
            }

        } while ((a + b < c || b + c < a || a + c < b));

        if ((a <= 0) || (b <= 0) || (c <= 0))
        {
            cout << "Wartość nie moge być mniejsza bądź rowna zero!" << endl;
        }

    } while ((a <= 0) || (b <= 0) || (c <= 0));

    cout << "wczytane dane" << endl;

    cout << "A=" << a << " cm" << endl;
    cout << "B=" << b << " cm" << endl;
    cout << "C=" << c << " cm" << endl;

    cout << "Wyniki" << endl;

    if (opcja == 1)
    {
        float p = (a + b + c) / 2;
        float s = sqrt(p * (p - a) * (p - b) * (p - c));

        cout << "Pole trojkata= " << s << " cm2" << endl;
    }
    if (opcja == 2)
    {
        float p = (a + b + c) / 2;
        float s = sqrt(p * ((p - a) * (p - b) * (p - c)));
        float r = (a * b * c) / (4 * s);
        cout << "Promien kola opisanego na trojkacie= " << r << " cm" << endl;
    }
    if (opcja == 3)
    {
        float p = (a + b + c) / 2;
        float s = sqrt(p * ((p - a) * (p - b) * (p - c)));
        float mr = (s / p);

        cout << "Promien kola wpisanego w trojkacie= " << mr << " cm" << endl;
    }
}
