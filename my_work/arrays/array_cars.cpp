#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"Turkish");
    int sayac=1;
    string cars[4];
    for(int j=0;j<4;j++)
    {
        cout << "Araba Markasi Giriniz:";
        cin >> cars[j];
    }

    cout << "--------------------------------------------------------------------\nAraba Markalari\n--------------------------------------------------------------------\n";

    for(int i = 0; i < 4;i++)
    {
        cout << sayac++ << "." << cars[i] << endl;
    }
    return 0;
}
