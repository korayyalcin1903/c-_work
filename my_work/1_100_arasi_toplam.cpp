#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int baslangic=1,toplam=0;
    while (baslangic<=100)
    {
        toplam=toplam+baslangic;
        baslangic++;     
    }
    cout << "1 ile 100 arasi toplami=" << toplam;
    return 0;
}
