#include <iostream>     //int a[5];
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char dizi[] = {'B', 'U', 'C', 'A', 'K','\n'};//n null
    dizi[] = {'B', 'U', 'C', 'A', 'K', 'L', 'I'};
    for (int i = 9; i >= 0; i++)
    {
        cout<<dizi[i];
    }
    
    return 0;
}
