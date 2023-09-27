#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    vector<vector<int>> table(r, vector<int>(c, 0));
    vector<int> rsum(r, 0);
    vector<int> csum(c + 1, 0);

    for (int y = 0; y < r; ++y)
    {
        for (int x = 0; x < c; ++x)
        {
            int i;
            cin >> i;
            table[y][x] = i;
            rsum[y] += i;
            csum[x] += i;
            csum[c] += i;
        }
        cin.ignore();
    }
    

    for (int y = 0; y < r; ++y)
    {
        for (int x = 0; x < c; ++x)
            cout << table[y][x] << " ";
        cout << rsum[y] << endl;
    }

    for (int x = 0; x <= c; ++x)
        cout << csum[x] << (x != c ? ' ' : '\n');

    return 0;
}