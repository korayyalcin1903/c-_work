#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int sayi=rand()%89+10;
    int tahmin;
    cout<<"Bir sayi giriniz:";
    cin>>tahmin;
    while(1)
    {
        if(sayi==tahmin)
        {
            cout<<"Dogru bildiniz";
            break;
        }
        else if(sayi>tahmin)
        {
            cout << "Arttir ve sayi gir:";
            cin>>tahmin;
        }
        else
        { 
            cout << "Azalt ve sayi gir:";
            cin>>tahmin;
        }
    }
    return 0;
}
