#include <iostream>     //fonsiyon adı (giriş parametresi){}
using namespace std;    // fonksiyon adı()

float toplam(float a, float b)
{
    float sonuc = a+b;
    return sonuc;
}

main()
{
    float sayi1,sayi2;
    cin>>sayi1;
    cin>>sayi2;
    cout<<toplam(sayi1,sayi2);
}