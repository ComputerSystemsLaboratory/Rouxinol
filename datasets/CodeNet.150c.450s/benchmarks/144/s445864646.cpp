#include <iostream>
using namespace std;

const int kCellNum = 100;

void createMtx(int mtx[100][100], int rowNum, int colNum)
{
    for (int i=0; i<rowNum; ++i)
    {
        for (int j=0; j<colNum; ++j)
        {
            cin >> mtx[i][j];
        }
    }
}

int main()
{
    int mtxA[kCellNum][kCellNum] = {0};
    int mtxB[kCellNum][kCellNum] = {0};

    int n, m, l;
    cin >> n >> m >> l;
    createMtx(mtxA, n, m);
    createMtx(mtxB, m, l);

    for (int i=0; i<n; ++i)
    {
        for (int j=0; j<l; ++j)
        {
            long long sum = 0;
            for (int k=0; k<m; ++k)
            {
                sum += mtxA[i][k] * mtxB[k][j];
            }
            cout << sum;
            if (j != l-1) cout << ' ';
        }
        cout << endl;
    }

    return 0;
}