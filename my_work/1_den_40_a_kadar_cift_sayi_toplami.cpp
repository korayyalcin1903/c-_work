#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int toplam=0;
    for(int i=1;i<=40;i++)
    {
        if(i%2==0){
            toplam+=i;
        }
    }
    cout << toplam;
    return 0;
}
