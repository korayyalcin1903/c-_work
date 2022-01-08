#include <iostream>
using namespace std;

int main ()
{
    float kilo,boy,vki;
    cout << "Vucut kitle indeksi Programimiza hos geldiniz\n---------------------------------------------------\n";
    cout << "Kilonuzu giriniz:";
    cin >> kilo;
    cout << "Boyunuzu giriniz:";
    cin >> boy;
    vki = ((kilo)/(boy*boy))*10000;

    if(vki<0)
    {
        cout << "Hatalı deger girdiniz...";
    }
    else if(vki<18.5)
    {
        cout << vki << " : Zayıf";
    }
    else if(18.5<=vki&&vki<=24.9)
    {
        cout << vki << " : Normal";
    }
    else if(25<=vki&&vki<=29.9)
    {
        cout << vki << " : Fazla Kilolu";
    }
    else
    {
        cout << vki << " : Obez";
    }
    return 0;
}