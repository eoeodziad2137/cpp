#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    int start, stop, iloczyn, imie;

    cout<<"Podaj liczbe liter twojego imienia: ";
    cin >> imie;

    start = imie % 4 + 1;


    cout<<"n= "<<start<<endl;

    stop = imie % 4 + 6;

    cout<<"koniec= "<<stop<<endl;

    iloczyn = 1;

    while(start<=stop)
    {
        iloczyn = iloczyn * start;
        start++;

    }

    cout<<"Iloczyn wynosi:"<<iloczyn<<endl;




}