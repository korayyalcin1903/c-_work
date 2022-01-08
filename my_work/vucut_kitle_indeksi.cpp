#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    float kilo,vki,boy;
    setlocale(LC_ALL, "Turkish");
    cout << "Kilonuzu giriniz:";
    cin >> kilo;
    cout << "Boyunuzu giriniz:";
    cin >> boy;
    vki = (kilo/pow(boy,2))*10000;
    
    if(vki>40)
    {
        cout << "III. derece obez\nVücüt kütle indeksiniz:" << vki;
    }

    else if(vki>35&&vki<39.9)
    {
        cout << "II. derece obez\nVücüt kütle indeksiniz:" << vki;
    }

    else if(vki>30&&vki<34.9)
    {
        cout << "I. derece obez\nVücüt kütle indeksiniz:" << vki;
    }

    else if(vki>25&&vki<29.9)
    {
        cout << "Fazla kilolu\nVücüt kütle indeksiniz:" << vki;
    }

    else if(vki>18.5&&vki<24.9)
    {
        cout << "Normal kilolu\nVücüt kütle indeksiniz:" << vki;
    }

    else if(vki<18.5)
    {
        cout << "Zayıf\nVücüt kütle indeksiniz:" << vki;
    }

    return 0;
}
