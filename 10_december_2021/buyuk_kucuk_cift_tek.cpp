#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sayi1,sayi2;
	cout<<"Sayi giriniz=";
	cin>> sayi1;
	cout<<"Sayi giriniz=";
	cin>> sayi2;
	
	if(sayi1>sayi2)
		{
			cout << sayi1 << " " << "Buyuktur";
			if(sayi1%2==0)
				{
					cout << "cifttir";
				}
			else 
				{
					cout << "tektir";
				}
		}
	else
		{
			cout << sayi2 << " " << "buyuktur";
			if(sayi2%2==0)
				{
					cout <<"cifttir";
				}
			else 
				{
					cout <<"tektir";
				}
		}
	
	return 0;
}
