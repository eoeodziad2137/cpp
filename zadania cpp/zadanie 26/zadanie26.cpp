#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");
    int a, b, c;

    do
    {
        /* code */

        cout << "podaj wartosc liczby A: ";
        cin >> a;
        cout << endl;

        cout << "podaj wartosc liczby B: ";
        cin >> b;
        cout << endl;

        cout << "podaj wartosc liczby C: ";
        cin >> c;
        cout << endl;

        if (a == b || a == c || b == c || b == a || c == a || c == b)
        {
            cout << "liczby o tej samej wartosci, podaj ponownie wartosci liczb" << endl;
        }
    } while (a == b || a == c || b == c || b == a || c == a || c == b);

    int max = a;
    int min = a;
    int sum = a;

    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    if (a < max && a > min)
    {
        sum = a;
    }
    if (b < max && b > min)
    {
        sum = b;
    }
    if (c < max && c > min)
    {
        sum = c;
    }
    

    //sum += b * c;
    //double avg = sum / 3;

    cout << "Najwieksza: " << max << endl;
    cout << "srednia: " << sum << endl;
    cout << "Najmniejsza: " << min << endl;
}