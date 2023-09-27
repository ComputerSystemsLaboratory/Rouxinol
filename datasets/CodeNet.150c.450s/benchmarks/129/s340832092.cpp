#include <iostream>
using namespace std;


int main()
{
    const int kMaxLineNum = 100;
    int row, col;
    int cells[kMaxLineNum][kMaxLineNum] = {0};
    
    cin >> row >> col;
    for (int i=0; i<row; ++i)
    {
        for (int j=0; j<col; ++j)
        {
            cin >> cells[i][j];
        }
    }

    int sum, allSum=0;
    for (int i=0; i<row; ++i)
    {
        sum = 0;
        for (int j=0; j<col; ++j)
        {
            cout << cells[i][j] << ' ';
            sum += cells[i][j];
        }
        cout << sum << endl;
        allSum += sum;
    }
    
    for (int i=0; i<col; ++i)
    {
        sum = 0;
        for (int j=0; j<row; ++j)
        {
            sum += cells[j][i];
        }
        cout << sum << ' ';
    }
    cout << allSum << endl;
    
    return 0;
}