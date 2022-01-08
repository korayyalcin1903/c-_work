#include <iostream>     
using namespace std;    

int main(int argc, char const *argv[])
{
    int matris[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            matris[i][j]=0;
            matris[0][j]=i;
            cout<< matris[0][j] << "  ";
        }
        cout<<endl;
    }
    
    return 0;
}
