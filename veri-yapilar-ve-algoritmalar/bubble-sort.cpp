#include <iostream>
using namespace std;

int bubblesort(int dizi[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(dizi[j]>dizi[j+1]){
                int temp = dizi[j+1];
                dizi[j+1]=dizi[j];
                dizi[j]=temp;
            }
        }
    }
}

int main()
{
    int dizimiz[5]={7,3,9,8,5};
    bubblesort(dizimiz,5);
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
