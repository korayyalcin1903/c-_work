#include <iostream>     //2 boyutlu diziler
using namespace std;    //int dizi[satır][sütun]

int main(int argc, char const *argv[])
{
    int dizi[4][4] = {{7, 9, 11, 6},{5, 4, 8, 0},{3, 8, 99, -1},{5, 4, 88, 2}};
    dizi[3][2] = 55;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout << dizi[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
