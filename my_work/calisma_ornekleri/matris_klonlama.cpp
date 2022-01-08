#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    string matris[10][10];
    string matrisKlon[10][10];
    static const string karakterListesi = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    srand(time(NULL));
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            matris[i][j] = karakterListesi[rand() % karakterListesi.size()]; 
        }
    }

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            matrisKlon[i][j] = matris[i][j];
            cout << matrisKlon[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
