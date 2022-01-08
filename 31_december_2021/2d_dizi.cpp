#include <iostream>     //2 boyutlu diziler
using namespace std;    //int dizi[satır][sütun]

int main(int argc, char const *argv[])
{
    int dizi[20][20];
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            dizi[i][j] = 0;
            cout<<dizi[i][j] << "\t";
        }
    }
    
    return 0;
}
