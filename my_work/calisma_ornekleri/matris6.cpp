#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int matris[100][100];
    int sayi;
    for(int i=0;i<100;i++)
    {
        for(int j=0;j<100;j++)
        {
            matris[i][j]=rand() %89+10;
            cout << matris[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "Sayi giriniz:";
    cin >> sayi;
    int sayac=0,indexSatir,indexSutun;
    for(int i=0;i<100;i++)
    {
        for(int j=0;j<100;j++)
        {
            if(sayi==matris[i][j])
            {
                indexSatir = i+1;
                indexSutun = j+1;
                sayac++;
                cout << sayi << "'.nin indeksi " << indexSatir << ".satir " << indexSutun << ".sutun" << endl;
            }
        }

    }
    if(sayac==0)
    {
        cout << sayi << " yoktur......";
    }
    else
    {
    cout << "Girilen sayidan " << sayac << ".tane var...";
    }
    return 0;
}
