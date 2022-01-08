#include <iostream>
using namespace std;
//	if(koşul)
//	{
//		işlemler
//	}
//	else
//	{
//		işlemler
//	}


int main(int argc, char** argv) {
	int notum;
	cout<<"Notu giriniz=";
	cin>> notum;
	if(notum>=50)
	{
		cout<<"Sinifi gectin";
	}
	else
	{
		cout<<"Kaldin";
	}
	return 0;
}
