#include <iostream>     //2 boyutlu diziler
using namespace std;    //int dizi[satır][sütun]

int main(int argc, char const *argv[])
{
    int dizi[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i==0)
            {
                dizi[i][j] = 1;
            }
            else
            {
                dizi[i][j] = 0;
            }
            cout<<dizi[i][j] << "\t";
        }
        cout<<endl;
    }
    
    return 0;
}
