#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int matris[2][2]={{2,8},{7,9}};
    int a11=(matris[0][0]*matris[1][1])-(matris[0][1]*matris[1][0]);
    
    cout<<"Determinant="<<a11;
    return 0;
}
