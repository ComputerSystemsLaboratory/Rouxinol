#include <iostream>
#include <vector>
using namespace std;
using ll = long long int;

int main()
{
    ll D;
    cin >> D;
    vector<ll> C(26);
    for (size_t i = 0; i < 26; i++)
    {
        cin >> C[i];
    }

    vector<vector<ll>> S(D, vector<ll>(26));
    for (size_t i = 0; i < D; i++)
    {
        for (size_t j = 0; j < 26; j++)
        {
            cin >> S[i][j];
        }
    }
    vector<ll> LAST(26, 0);

    ll sum = 0;

    for (size_t i = 0; i < D; i++)
    {
        ll ti;
        cin >> ti;
        ti -= 1;
        sum += S[i][ti];

        for (size_t j = 0; j < 26; j++)
        {
            if (ti == j) {
                continue;
            }
            sum -= (C[j] * (i + 1 - LAST[j]));
        }
        LAST[ti] = i + 1;
        cout << sum << endl;
    }
}