#include <iostream> 
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,toplam=0;
    cout << "Bir a giriniz:";
    cin >> a;
    for(int i=1;i<=a;i++)
    {
        if(i%5==0&&i%7==0)
        {
            cout << i << endl;
        }
    }

    return 0;
}
