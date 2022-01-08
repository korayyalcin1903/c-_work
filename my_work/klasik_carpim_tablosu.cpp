#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    for(int i=1;i<=10;i++)
    {
        cout << "------------------------------------------------" << endl;
        for(int j=1;j<=10;j++)
        {
            cout << i << "x" << j << "=" << i*j << endl;
        }
    }
    return 0;
}
