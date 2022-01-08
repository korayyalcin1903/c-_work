#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int deger,faktoriyel=1;
    cout << "Bir sayi giriniz:";
    cin >> deger;
    for(int i=deger;i>1;i--)
    {
        faktoriyel*=i;
    }
    cout << deger << "faktoriyel=" << faktoriyel;
    return 0;
}
