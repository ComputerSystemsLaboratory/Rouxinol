#include <bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[])
{
    int p1,p2,p3;
    cout.precision(11);
    cin >> p1 >> p2 >> p3;
    vector<double> dummy;
    vector<vector<double>> mat1;
    vector<vector<double>> mat2;

    for (int row = 0; row < p1; row++)
    {
        dummy.clear();
        for (int col = 0; col < p2; col++)
        {
            double tmp;
            cin >> tmp;
            dummy.push_back(tmp);
        }
        mat1.push_back(dummy);
    }
    for (int row = 0; row < p2; row++)
    {
        dummy.clear();
        for (int col = 0; col < p3; col++)
        {
            double tmp;
            cin >> tmp;
            dummy.push_back(tmp);
        }
        mat2.push_back(dummy);
    }

    for (int row = 0; row < p1; row++)
    {
        for (int col = 0; col < p3; col++)
        {
            double tmp = 0;
            for (int i = 0; i < p2; i++)
            {
                tmp += mat1[row][i]*mat2[i][col];
            }
            cout << tmp;
            if(row==p1-1 && col==p3-1) continue;
            if(col!=p3-1) cout << " ";
        }
        cout << endl;
    }


    return 0;
}

