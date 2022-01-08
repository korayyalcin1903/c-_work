#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,c,u;
    float alan;
    cout << "1. Uzunluğu giriniz:";
    cin >> a;
    cout << "2. Uzunluğu giriniz:";
    cin >> b;
    cout << "3. Uzunluğu giriniz:";
    cin >> c;
    u = (a + b + c)/2;
    alan = sqrt(u*(u-a)*(u-b)*(u-c));
    cout << "Üçgenin alani=" << alan;
    return 0;
}
