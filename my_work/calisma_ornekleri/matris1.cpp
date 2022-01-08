#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int matris[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==2||j==2)
            {
                matris[i][j] = 7;
            }
            else
            {
                matris[i][j] = 0;
            }
            cout << matris[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}
