#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int sayac=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=0;j<sayac;j++)
        {
            cout << "*";
        }
        cout << endl;
        sayac++;
    }
    
    return 0;
}
