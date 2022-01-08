#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int sayi,teksayac=0,ciftsayac=0;
    for(int i=1;i<=10;i++)
    {
        cout << "Sayi Giriniz=";
        cin >> sayi;
        if(sayi%2==0)
        {
            ciftsayac++;
        }
        else
        {
            teksayac++;
        }
    }
    cout << "Çift Sayisi adeti=" << ciftsayac << endl;
    cout << "Tek Sayi adeti=" << teksayac;

    return 0;
}
