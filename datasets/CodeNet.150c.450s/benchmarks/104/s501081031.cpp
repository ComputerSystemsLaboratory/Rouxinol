#include <iostream>
#include <stdio.h>
using namespace std;



int main()
{

    int JumlahGarisVertikal;
    int JumlahGarisHorizontal;
    int DaftarAngka[30];
    int TukarNilai[30][2];

    cin >> JumlahGarisVertikal;
    cin >> JumlahGarisHorizontal;

    for(int x = 0 ; x < JumlahGarisVertikal; x++)
    {
        DaftarAngka[x] = x+1;
    }

    for(int y = 0; y < JumlahGarisHorizontal; y++)
    {
        scanf("%d,%d",&TukarNilai[y][0],&TukarNilai[y][1]);

        int temp = DaftarAngka[TukarNilai[y][0] - 1];
        DaftarAngka[TukarNilai[y][0] - 1] = DaftarAngka[TukarNilai[y][1] - 1];
        DaftarAngka[TukarNilai[y][1] - 1] = temp;
    }

    for(int z = 0; z < JumlahGarisVertikal; z++)
    {
        cout << DaftarAngka[z] << endl;
    }

}