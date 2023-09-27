#include <iostream>

using namespace std;


int main()
{
    int m[50],d[50];
    int x = 0;
    string Day[7] = {"Thursday", "Friday","Saturday","Sunday","Monday", "Tuesday", "Wednesday"};
    int BanyakHari[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    string ThatDayIs[50];

    do
    {
        int DayinBetween = 0;
        cin >> m[x] >> d[x];
        if((m[x] == 0) && (d[x] == 0))
        {
            break;
        }
        //Check banyak hari antara 1 Januari - Input
        for(int y = 0; y < m[x]-1; y++)
        {
            DayinBetween = DayinBetween + BanyakHari[y];
        }
        DayinBetween = (DayinBetween + d[x] - 1)%7;


        ThatDayIs[x] = Day[DayinBetween];

        x++;
    }
    while(x < 50);

    for(int z = 0; z < x; z++)
    {
        cout << ThatDayIs[z] << endl;
    }


}