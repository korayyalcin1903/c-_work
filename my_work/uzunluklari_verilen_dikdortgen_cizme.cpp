#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int uzun,kisa;
    cout << "Uzun kenari giriniz:";
    cin >> uzun;
    cout << "Kısa kenari giriniz:";
    cin >> kisa;
    for(int i=1;i<=uzun;i++)
    {
        cout << "*";
        for(int j=1;j<=kisa;j++)
        {
            cout << "*";
        }
    }
    return 0;
}
