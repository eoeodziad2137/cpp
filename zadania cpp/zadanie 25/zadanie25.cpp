#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    int a, b, c, x1, x2, x0;

    cout << "Podaj wartosc wspolczynnika A:";
    cin >> a;

    cout << "Podaj wartosc wspolczynnika B:";
    cin >> b;

    cout << "Podaj wartosc wspolczynnika C:";
    cin >> c;

    float delta = (b * b) - 4 * a * c;

    cout << "Delta=" << delta << endl;

    if (delta > 0)
    {
        x1 = ((-b - sqrt(delta)) / (2 * a));

        x2 = ((-b + sqrt(delta)) / (2 * a));

        cout << "To rownanie ma dwa pierwiastki rzeczywiste: x1=" << x1 << " oraz x2=" << x2 << endl;
    }
    else if (delta == 0)
    {
        x0 = (-b / (2 * a));
        
        cout << "To rownanie ma jeden pierwiastek rzeczywisty x0=" << x0 << endl;
    }
    else
    {
        cout << "To rownanie nie ma rozwiązania" << endl;
    }
}