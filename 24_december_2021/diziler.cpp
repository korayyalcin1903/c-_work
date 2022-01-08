#include <iostream>     //int a[5];
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[10] = {45, 3, -8, 1, 2, 3, 4, 5, 6, 10};

    for(int j=0;j<10;j++)
    {
        cout << "Sayi giriniz:";
        cin >> a[j];
    }
    cout << "-------------------------------------------------"<<endl;
    for(int i=0;i<10;i++)
    {
        cout <<"Dizinin " << i+1 << ". Elemani:" << a[i] << endl;
    }
    return 0;
}
