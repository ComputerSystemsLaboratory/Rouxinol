#include <bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[])
{
    int row, column;
    cin >> row >> column;
    vector<vector<int>> mat;
    vector<int> input;
    for (int i = 0; i < row; i++)
    {
        vector<int> col;
        for (int j = 0; j < column; j++)
        {
            int tmpint;
            cin >> tmpint;
            col.push_back(tmpint);
        }
        mat.push_back(col);
    }
    for (int i = 0; i < column; i++)
    {
        int tmpint;
        cin >> tmpint;
        input.push_back(tmpint);
    }
    for (int i = 0; i < row; i++)
    {
        int tmptotal = 0;
        for (int j = 0; j < column ; j++)
        {
            tmptotal += mat[i][j]*input[j];
        }
        cout << tmptotal << endl;
    }
    return 0;
}
