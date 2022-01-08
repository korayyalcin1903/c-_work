#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int notum;
	cout<<"Notu giriniz=";
	cin>> notum;
	if(notum<=100&&notum>=0)
	{
	if(notum>=90)
	{
		cout<<"aa";
	}
	else if(notum>=80)
	{
		cout<<"BB";
	}
	else if(notum>=70)
	{
		cout<<"CC";
	}
	else if(notum>=60)
	{
		cout<<"DD";
	}
	else
	{
		cout<<"FF";
	}
}
else
{
	cout<<"0 ile 100 arasinda deger gir";
}
	return 0;
}
