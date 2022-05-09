#include <iostream>
using namespace std;

int insertionsort(int dizi[],int n){
    int i,j,anahtar;
    for(i=1;i<n;i++){
        anahtar=dizi[i];
        j=i-1;
        while(j>=0&&dizi[j]>anahtar){
            dizi[j+1]=dizi[j];
            j=j-1;
        }
        dizi[j+1]=anahtar;
    }
}
int main()
{
    int dizimiz[5]={7,3,9,8,5};
    insertionsort(dizimiz,5);
    for(int k=0;k<5;k++){
        cout<<dizimiz[k];
        if(k<4){
            cout<<"-";
        }
        else{
            break;
        }
    }
    return 0;
}
