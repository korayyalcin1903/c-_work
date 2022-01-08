#include <iostream> //do{işlemler}
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /*int a;
    do
    {
        cout << "a giriniz:";
        cin >> a;
    }
    while (a>0);*/

    /*char harf;
    do
    {
        cout << "harf giriniz:";
        cin >> harf;
    }
    while (harf=='b'||harf=='B');*/
    int sayac = 1;
    while(1) //sonsuz döngü true veya sayı yazarsan aynı anlama gelir. 1==1 de aynı anlama gelir.
    {
        cout << "Merhaba";
        sayac++;
        if(sayac>1000) break;
    }

    return 0;
}
