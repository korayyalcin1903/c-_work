#include <iostream>     //2 boyutlu diziler
using namespace std;    //int dizi[satır][sütun]

int main(int argc, char const *argv[])
{
    int satir,sutun;
    cin>>satir;
    cin>>sutun;
    int dizi[satir][sutun];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i+j==3||i+j>3)
            {
                dizi[i][j] = 7;
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
