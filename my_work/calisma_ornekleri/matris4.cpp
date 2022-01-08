#include <iostream>     
using namespace std;    

int main(int argc, char const *argv[])
{
    char dizi[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i+j==4||i==j)
            {
                dizi[i][j] = 'K';
            }
            else
            {
                dizi[i][j] = '0';
            }
            cout<<dizi[i][j] << "  ";
        }
        cout<<endl;
    }
    
    return 0;
}
