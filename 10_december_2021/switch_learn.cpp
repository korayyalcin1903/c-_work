#include <iostream>
using namespace std;
/* switch(koşul değer,de�i�ken)
/* case x:.....
/* case y:.....
/* default;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sayi,yenisayi;
	cout<<"Sayi giriniz=";
	cin>> sayi;
	
	switch(sayi)
	{
		case 1: cout << "Bir girdiniz.";
				break;
		case 5: cout << "Beş girdiniz";
				break;
		case 10: cout << "�kiabasamakliaa girdiniz.\n";
				yenisayi = 3;
				yenisayi++;
				cout << yenisayi;
				break;
		default: cout << "Istedigim sayiyi girmedin";
	}
	
	
	return 0;
}
