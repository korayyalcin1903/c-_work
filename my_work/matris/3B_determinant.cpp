#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int matris[3][3]={{2,4,7},{6,-3,1},{1,2,-5}};
    int a11=matris[0][0]*pow(-1,2)*((matris[1][1]*matris[2][2])-(matris[1][2]*matris[2][1]));
    
    int a12=matris[0][1]*pow(-1,3)*((matris[1][0]*matris[2][2])-(matris[1][2]*matris[2][0]));
    
    int a13=matris[0][2]*pow(-1,4)*((matris[1][0]*matris[2][1])-(matris[1][1]*matris[2][0]));
    
    cout<<"Determinant="<<a11+a12+a13;
    return 0;
}
