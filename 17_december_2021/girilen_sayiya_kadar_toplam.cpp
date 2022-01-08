#include <iostream> 
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,toplam=0;
    cout << "Bir a giriniz:";
    cin >> a;
    for(int i=0;i<=a;i++)
    {
        toplam+=i;
    }
    cout << "toplam="<<toplam;
    return 0;
}
