#include <iostream>
using namespace std;
//
//int ikiliArama(int dizi[],int sol,int sag,int aranan){
//    int orta;
//    if(sag>=sol){
//        orta=sol+((sag-sol)/2);
//        if(dizi[orta]==aranan)
//            return orta;
//        else if(dizi[orta]>aranan)
//            return ikiliarama(dizi,sol,orta-1,aranan);
//        else
//            return ikiliarama(dizi,orta+1,sag,aranan);
//    }
//    else
//        return -1;
//}
//
//int main()
//{
//    int dizimiz[11] = {3, 6, 8, 11, 16, 19, 22, 28, 32, 45, 82};
//    // Örneğin değeri 82 olan elemanın indeksini göstersin:
//    cout<<"aradığın elemanın sırası: "<<ikiliArama(dizimiz, 0, 11, 82);
//}


int bubblesort(int dizi[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(dizi[j]>dizi[j+1]){
                int temp=dizi[j+1];
                dizi[j+1]=dizi[j];
                dizi[j]=temp;
            }
        }
    }
}

int insertionsort(int dizi[],int n){
    int i,j,anahtar;
    for(i=1;i<n;i++){
        anahtar=dizi[i];
        j=i-1;
        while(j>=0&&dizi[j]>anahtar){
            dizi[j+1]=dizi[j];
            j=j+1;
        }
        dizi[j+1]=anahtar;
    }
}