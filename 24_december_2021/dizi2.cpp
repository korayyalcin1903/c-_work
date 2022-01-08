#include <iostream>     //int a[5];
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int sinif_mevcudu;
    cout << "Sinif mevcudu kac?";
    cin>>sinif_mevcudu;

    int dizi[sinif_mevcudu];
    for(int i=0;i<sinif_mevcudu;i++)
    {
        cout<<"Not:";
        cin>>dizi[i];
    }
    return 0;
}
