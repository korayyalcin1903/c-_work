#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int yildiz=1;
    for(int i=0;i<7;i++)
    {
            for (int j=0;j<yildiz;j++)
            {
                cout << "*";
            }
            yildiz++;
        cout<<"\n";    
    }

    return 0;
}
