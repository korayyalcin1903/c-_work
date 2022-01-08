#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    float x1,x2,x3,determinant;
    int matris[4][3]={{4,-2,3},{1,3,-1},{-5,1,4},{8,12,5}};
    int a11=matris[0][0]*pow(-1,2)*((matris[1][1]*matris[2][2])-(matris[1][2]*matris[2][1]));
    
    int a12=matris[0][1]*pow(-1,3)*((matris[1][0]*matris[2][2])-(matris[1][2]*matris[2][0]));
    
    int a13=matris[0][2]*pow(-1,4)*((matris[1][0]*matris[2][1])-(matris[1][1]*matris[2][0]));
    
    determinant = a11+a12+a13;

    cout<<"Determinant="<<determinant << endl;

    x1 = ((matris[3][0]*pow(-1,2)*(matris[1][1]*matris[2][2]-matris[1][2]*matris[2][1]))+
    (matris[0][1]*pow(-1,3)*(matris[3][1]*matris[2][2]-matris[1][2]*matris[3][2]))+
    (matris[0][2]*pow(-1,4)*(matris[3][1]*matris[2][1]-matris[1][1]*matris[3][2])))/determinant;
    cout << "X1=" << x1 << endl;

    x2 = ((matris[0][0]*pow(-1,2)*(matris[3][1]*matris[2][2]-matris[1][2]*matris[3][2]))+
    (matris[3][0]*pow(-1,3)*(matris[1][0]*matris[2][2]-matris[1][2]*matris[2][0]))+
    (matris[0][2]*pow(-1,4)*(matris[1][0]*matris[3][2]-matris[3][1]*matris[2][0])))/determinant;
    cout << "X2=" << x2 << endl;

    x3 = ((matris[0][0]*pow(-1,2)*(matris[1][1]*matris[3][2]-matris[3][1]*matris[2][1]))+
    (matris[0][1]*pow(-1,3)*(matris[1][0]*matris[3][2]-matris[3][1]*matris[2][0]))+
    (matris[3][0]*pow(-1,4)*(matris[1][0]*matris[2][1]-matris[1][1]*matris[2][0])))/determinant;
    cout << "X3=" << x3 << endl;

    return 0;
}
