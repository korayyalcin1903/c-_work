#include <iostream>
using namespace std;

int sayi1,sayi2;
char isaret;
float sonuc;

float topla()
{
    return sayi1+sayi2;
}

float cikar()
{
        return sayi1-sayi2;
}

float carp()
{
    return sayi1*sayi2;
}

float bol()
{
    return sayi1/sayi2;
}

int main(int argc, char const *argv[])
{
    cout << "Sayi giriniz:";
    cin >> sayi1;
    cout << "+ - * / \n";
    cin >> isaret;
    cout << "Sayi giriniz:";
    cin >> sayi2;

    if(isaret=='+')
    {
        sonuc=topla();
    }
    else if(isaret=='-')
    {
        sonuc=cikar();
    }
    else if(isaret=='*')
    {
        sonuc=carp();
    }
    else
    {
        sonuc=bol();
    }

    cout << sayi1 << " " << isaret << " " << sayi2 << " = " << sonuc;
}
