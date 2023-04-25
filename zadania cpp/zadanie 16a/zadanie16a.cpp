#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    int n;
    int wyn = 0;
    int d = 2;

    cout << "Podaj wartosc N: ";
    cin >> n;

    do

    {
        if (n % d == 0)
        {
            wyn = wyn + 1;
        }
        d = d + 1;
    } while (d <= (n / 2));

    cout<< "wyn=" << wyn << endl;

    cout << "d=" << d << endl;
}