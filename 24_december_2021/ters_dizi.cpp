#include <iostream>     //int a[5];
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(NULL));//randomda saat kullanır
    int dizi[10];

    for(int i=0;i<10;i++)
    {
        dizi[i]=rand()%989+10;//10 ile 99 arası sayılar
    }
    for (int i = 9; i > 0; i--)
    {
        cout<<dizi[i]<<endl;
    }
    
    return 0;
}
