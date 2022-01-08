#include <iostream> //endl bir alt satıra geçmeyi sağlar
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int sayi;
    cout << "Bir a giriniz:";
    cin >> sayi;

    int sayac=1;
    while (sayac<1000)
    {
        sayac++;
        if(sayi == sayac)
        cout << sayac << endl;
    }
    

    return 0;
}
