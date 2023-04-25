#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    int przedn, przedm, n, m, r;

    cout << "Podaj pierwsza liczbe n= ";
    cin >> n;
    cout << "Podaj druga liczbe mniejsza lub rowna m= ";
    cin >> m;

    przedn=n;
    przedm=m;
    while (m>0)
    {
        r = n % m;
        n = m;
        m = r;
    }

    cout << "NWD(" << przedn << ", " << przedm << ")="<<n << endl;
}