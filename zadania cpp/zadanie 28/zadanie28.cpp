#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    char a;

    cout << "Dzień dobry" << endl;
    cout << endl;

    goto pytanie;

    tutaj:

    cout << "Jestem u gory" << endl;

    pytanie:
    cout << "Jeśli chcesz skonczyc wcisnij klawisz y lub Y" << endl;
    cout << "Podaj jakis znak: ";

    cin >> a;

    cout<<endl;
    
    a = tolower(a);

    if (a != 'y')
    {
        cout<<"Jestem na dole"<<endl;
        goto tutaj;
    }
    else if (a == 'y')
    {
        goto koniec;
    }
    koniec:

    return 0;
}