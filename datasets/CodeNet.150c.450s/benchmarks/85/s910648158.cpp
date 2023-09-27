#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

static const int N = 1000;

int main()
{
    int n, p[N + 1];
    vector<vector<int>> m(N + 1, vector<int>(N + 1));
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i - 1] >> p[i];
    }
    for (int i = 1; i <= n; i++)
    {
        m.at(i).at(i) = 0;
    }
    for (int l = 2; l <= n; l++)
    {
        for (int i = 1; i <= n - 1; i++)
        {
            int j = i + l - 1;
            m.at(i).at(j) = (1 << 21);
            for (int k = i; k <= j - 1; k++)
            {
                m.at(i).at(j) = min(m.at(i).at(j), m.at(i).at(k) + m.at(k+1).at(j) + p[i - 1] * p[k] * p[j]);
            }
        }
    }
    cout << m[1][n] << endl;
    return 0;
}
