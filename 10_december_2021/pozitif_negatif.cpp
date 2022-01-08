#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sayi;
	cout<<"sayi giriniz=";
	cin>> sayi;
	if(sayi>0)
	{
	cout<<"pozitif";
	}
	else if(sayi==0)
	{
	cout<<"notr";
}
	else
	{
	cout<<"negatif";
}
	return 0;
}
