#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
int N;
string S[100100];

int main()
{
    cin >> N;
    rep(i, N)
    {
        cin >> S[i];
    }

    string check[4] = {"AC", "WA", "TLE", "RE"};
    int count[4] = {0, 0, 0, 0};
    rep(i, N)
    {
        rep(j, 4)
        {
            if (S[i] == check[j])
                count[j]++;
        }
    }

    rep(i, 4)
    {
        cout << check[i] << " x " << count[i] << endl;
    }
}
