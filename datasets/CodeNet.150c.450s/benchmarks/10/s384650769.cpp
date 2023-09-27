#include <iostream>
#include <map>

using namespace std;

const int B = 4;
const int F = 3;
const int R = 10;

int main()
{
    int row;
    int kousya[B][F][R] = {};
    while (cin >> row)
    {
        int b, f, r, v;
        for (int i = 0; i < row; i++)
        {
            cin >> b >> f >> r >> v;
            kousya[b - 1][f - 1][r - 1] += v;
            if(kousya[b - 1][f - 1][r - 1] < 0)
            {
                kousya[b - 1][f - 1][r - 1] = 0;
            }
            else if(kousya[b - 1][f - 1][r - 1] > 9)
            {
                kousya[b - 1][f - 1][r - 1] = 9;
            }
        }
        for (int j = 0; j < B; j++)
        {
            for (int jj = 0; jj < F; jj++)
            {
                for (size_t jjj = 0; jjj < R; jjj++)
                {
                    cout << " " << kousya[j][jj][jjj];
                }
                cout << endl;
            }
            if (j != F)
            {
                cout << "####################" << endl;
            }
        }
    }
    return (0);
}