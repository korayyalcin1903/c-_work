#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int s1,s2,s3,buyuk;
    cout << "Bir sayı giriniz:";
    cin >> s1;
    cout << "Bir sayı giriniz:";
    cin >> s2;
    cout << "Bir sayı giriniz:";
    cin >> s3;
    if(s1>s2)
    {
        if(s1>s3)
        {
            cout << "En büyük=" << s1;
        }

        else 
        {
            cout << "En büyük=" << s3;
        }
    }
    else
        {
            if(s2>s3)
            {
                cout << "En büyük=" << s2;
            }
            else
            {
                cout << "En büyük=" << s3;
            }
        }
    return 0;
}
