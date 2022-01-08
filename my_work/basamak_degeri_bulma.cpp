#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int sayi,birler,onlar,yuzler;
    while(1)
    {
        cout<<"Uc basamakli sayi giriniz:";
        cin>>sayi;
        if(sayi<=999&&sayi>=100)
        {
            yuzler=sayi/100;
            onlar=(sayi-(yuzler*100))/10;
            birler=(sayi-(yuzler*100))%10;
            break;
        }
    }
    cout<<"Yuzler:"<<yuzler<<endl;
    cout<<"Onlar:"<<onlar<<endl;
    cout<<"birler"<<birler<<endl;
    return 0;
}
