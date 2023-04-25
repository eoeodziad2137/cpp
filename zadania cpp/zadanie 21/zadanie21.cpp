#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char znak;

    float x;
    int y = 1;

    system("clear");
    do
    {
        cout << "Podaj liczbe: ";
        cin>>x;
        cout << endl;

        if (x >= 1)
        {
            cout<< "f(x)="<<y*x<<endl;
        }
        else if (-1<x || x < 1)
        {
            cout<< "f(x)="<<x*x<<endl;
        }
        else if (x <= -1)
        {
            cout<< "f(x)="<<y*x<<endl;
        }

        cout<<"Jeśli powtorzyc program wcisnij klawisz 'a' w przeciwnym wypadku wscijin dowolny klawicz literowy"<<endl;

        cin >> znak;
    } while (znak == 'a');
}