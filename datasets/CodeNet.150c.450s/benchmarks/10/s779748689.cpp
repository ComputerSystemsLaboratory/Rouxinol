#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int BUILDINGS = 4;
    const int FLOORS = 3;
    const int ROOMS = 10;
    int house[BUILDINGS+1][FLOORS+1][ROOMS+1];

    string border(20,'#');

    int n;
    int b, f, r, v;

    memset(house, 0, sizeof(house));

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> b >> f >> r >> v;

        house[b][f][r] += v;
    }

    for(int i = 1; i <= BUILDINGS; i++)
    {
        if(i != 1)
            cout << border << endl;
        for(int j = 1; j <= FLOORS; j++)
        {
            for(int k = 1; k <= ROOMS; k++)
            {
                cout << ' ' << house[i][j][k];
            }
            cout << endl;
        }
    }
}