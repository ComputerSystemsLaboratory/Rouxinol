#include <iostream>
#include <utility>
#include <algorithm>
#include <map>

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> Pll;

ll N, M;
Pll PD[10010], S[10010];

bool compare_f(Pll p, Pll q)
{
    return p.second > q.second;
}

ll DangerExpectedValue(Pll pd[], ll money, ll s)
{
    int i = 0;
    ll result = s;
    while (money > 0)
    {
        if (money >= pd[i].first)
        {
            result -= pd[i].first * pd[i].second;
        }
        else
        {
            result -= money * pd[i].second;
        }
        money -= pd[i].first;
        i++;
    }

    if (result < 0)
    {
        result = 0;
    }
    return result;
}

int main()
{
    while (cin >> N >> M && N)
    {
        ll d, p, s = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> d >> p;
            PD[i] = make_pair(d, p);
            s += d * p;
        }

        sort(PD, PD + N, compare_f);

        cout << DangerExpectedValue(PD, M, s) << endl;
    }
}

