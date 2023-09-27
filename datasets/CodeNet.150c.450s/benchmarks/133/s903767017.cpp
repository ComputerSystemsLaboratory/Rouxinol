#include <bits/stdc++.h>
using namespace std;

int64_t MOD = 1000000007;
double PI = 3.141592653589793;

int main()
{
    int D, tmp;
    cin >> D;
    vector<vector<int>> list(D, vector<int>(26));
    vector<int> C(26);
    vector<int> contest(D);

    for (int i = 0; i < 26; i++)
        cin >> C[i];
    for (int i = 0; i < D; i++)
        for (int j = 0; j < 26; j++)
            cin >> list[i][j];
    for (int i = 0; i < D; i++)
    {
        cin >> tmp;
        contest[i] = tmp - 1;
    }

    vector<int> last(26, -1);
    int ans = 0;

    for (int i = 0; i < D; i++)
    {
        ans += list[i][contest[i]];
        last[contest[i]] = i;
        for (int j = 0; j < 26; j++)
            ans -= C[j] * (i - last[j]);
        cout << ans << endl;
    }
}