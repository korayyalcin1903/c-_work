#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char matris[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if((i+j)%2==0)
            {
                matris[i][j]='C';
            }
            else
            {
                matris[i][j]='T';
            }
            cout << matris[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}
