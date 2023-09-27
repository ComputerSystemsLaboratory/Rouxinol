#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    constexpr int N = 26;
    int D;
    cin >> D;

    int c[N];
    for(auto& c_ : c)
    {
        cin >> c_;
    }

    int s[D][N];
    for(auto& s_ : s)
    {
        for (auto &s__ : s_)
        {
            cin >> s__;
        }
    }

    int t[D];
    for(auto& t_ : t)
    {
        cin >> t_;
    }

    {
        int score = 0;
        int last[N]{};
        for(int i = 0; i < D; ++i)
        {
            int select = t[i] - 1;
            score += s[i][select];
            last[select] = i + 1;
            for(int j = 0; j < N; ++j)
            {
                score -= c[j] * (i + 1 - last[j]);
            }
            cout << score << endl;
        }
    }

    return 0;
}