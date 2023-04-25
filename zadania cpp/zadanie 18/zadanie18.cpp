#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");


    int a, b;

    cout << "Program wykonujący dzielenie" << endl;
    cout << "Podaj pierwszą liczbę: ";
    cin >> a;
    cout<<endl;

    cout << "Podaj druga liczbę: ";
    cin >> b;
    cout<<endl;

    if (a == 0)
    {
        cout<<"Błąd! Dzielenie przez 0."<<endl;
    }
    else if (b==0)
    {
        cout<<"Błądd! Dzielenie przez 0."<<endl;
    }
    
    else
    {
        cout<<a/b<<endl;
    }
}