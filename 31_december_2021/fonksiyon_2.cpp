#include <iostream>     //fonsiyon adı (giriş parametresi){}
using namespace std; 

void yaz()
{
    cout<<"merhaba";
}

int kare(int a)
{
    return a*a;
}

float toplam(int a,int b)
{
    return kare(a)+b;
}


main()
{
    int sayi1,sayi2;
    cin>>sayi1;
    cin>>sayi2;
    cout<<toplam(sayi1,sayi2);
}