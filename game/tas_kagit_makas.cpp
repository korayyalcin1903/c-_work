#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"Turkish");
    int deger,computerdeger,computersayac=0,kullanicisayac=0;
    cout<<"1.Tas\n2.Kagit\n3.Makas\nSeciniz:";
    while(1)
    {
        cin>>deger;
        cout<<"-----------------------------"<<endl;
        computerdeger=rand()%3;
        if(deger<=3&&deger>=1)
        {
            if(deger==computerdeger)
            {
                cout<<"Beraber"<<endl;
                cout<<"Kullanici="<<kullanicisayac<<endl;
                cout<<"Bilgisayar="<<computersayac<<endl;
            }
            else if(deger==1&&computerdeger==3)
            {
                kullanicisayac++;
                cout<<"Kullanici eli kazandi"<<endl;
                cout<<"Kullanici="<<kullanicisayac<<endl;
                cout<<"Bilgisayar="<<computersayac<<endl;
            }
            else if(deger==1&&computerdeger==2)
            {
                computersayac++;
                cout<<"Bilgisayar eli kazandi"<<endl;
                cout<<"Kullanici="<<kullanicisayac<<endl;
                cout<<"Bilgisayar="<<computersayac<<endl;
            }
            else if(deger==2&&computerdeger==1)
            {
                kullanicisayac++;
                cout<<"Kullanici eli kazandi"<<endl;
                cout<<"Kullanici="<<kullanicisayac<<endl;
                cout<<"Bilgisayar="<<computersayac<<endl;
            }
            else if(deger==2&&computerdeger==3)
            {
                computersayac++;
                cout<<"Bilgisayar eli kazandi"<<endl;
                cout<<"Kullanici="<<kullanicisayac<<endl;
                cout<<"Bilgisayar="<<computersayac<<endl;
            }
            else if(deger==3&&computerdeger==1)
            {
                computersayac++;
                cout<<"Bilgisayar eli kazandi"<<endl;
                cout<<"Kullanici="<<kullanicisayac<<endl;
                cout<<"Bilgisayar="<<computersayac<<endl;
                cout<<"Seciniz:";
            }
            else
            {
                kullanicisayac++;
                cout<<"Kullanici eli kazandi"<<endl;
                cout<<"Kullanici="<<kullanicisayac<<endl;
                cout<<"Bilgisayar="<<computersayac<<endl;
                cout<<"Seciniz:";
            }
            if(computersayac==3)
            {
                cout<<endl<<"Bilgisayar Kazandi!!!!";
                break;
            }
            else if(kullanicisayac==3)
            {
                cout<<endl<<"Sen kazandin!!!";
                break;
            }
            cout<<"Seciniz:";
        }
    }
    return 0;
}
