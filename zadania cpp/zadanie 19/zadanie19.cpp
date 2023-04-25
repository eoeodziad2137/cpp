#include <iostream>


using namespace std;

int main(int argc, char *argv[]) 
{
    system ("chcp 1250");
    system("clear");

     int n;

     cout<<"Podaj liczbę całkowitą: ";
     cin>>n;
     cout<<endl;

     if(n==0)
     {
          cout<<"Liczba rowna zero"<<endl;
     }
     else if(n>0)
     {
        cout<<"Liczba większa od zero"<<endl;
     }
     else if(n<0) 
      {
          cout<<"Liczba mniejsza od zero"<<endl;
     }

}