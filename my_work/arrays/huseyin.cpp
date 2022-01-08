#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


void printarray(int a[], int size){  // Fonksiyon input olarak bir array deðer alacaðý için int[a]  tanýmladým. int size ise int array[0] in kaç karakterden oluþtuðunu input olarak alýyor.
	
	
	for(int i=0;i<size;i++){  // dizinin bütün elemanlarýný yazdýrmak için bir for döngüsü. size input olarak gelen dizinin kaç elemandan oluþtuðunu tutuyor.
		
		
		cout<<a[i]<<endl; // Tek tek dizinin bütün elemanlarýný yazdýrýr.
	}
	
	
}



int main() {
	

  
    int array[] = {1,2,3,4,5,6}; // bir array tanýmladým
    
    
    int (&refer)[sizeof(array)/sizeof(array[0])] = array; // refer adýnda bir referans tanýmladým. arrayin boyutunu ayarladým.
    
    refer[0] = 75; // referansý kullanarak array[0] ýn deðerini 75 olarak deðiþtirdim. (Burasý olmasaydý array[0] 1 olarak kalacaktý
    
    printarray(array,sizeof(array)/sizeof(array[0]));  // printarray fonksiyonunu çaðýrdým.
    
   
    
   
    
  
  


	
}