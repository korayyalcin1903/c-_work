#include <iostream>
using namespace std;

int arama(int dizi[], int sol, int sag, int aranan){
    int orta = sol + ((sag - sol) / 2);
    if(sag>=sol){
        if(dizi[orta]==aranan)
            return orta;
        if(dizi[orta]>aranan)
            return arama(dizi,sol,orta-1,aranan);
        else
            return arama(dizi,orta+1,sag,aranan);
    }
    else
        return -1;
}

int main()
{
    int dizimiz[11] = {3, 6, 8, 11, 16, 19, 22, 28, 32, 45, 82};
    cout << "Aradiginiz sayini sirasi:"<<arama(dizimiz,0,11,19);
}

