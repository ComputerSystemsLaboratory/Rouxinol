#include <bits/stdc++.h>
using namespace std;

#define REP(i, s, n) for (int i = s; i < n; ++i)
#define rep(i, n) REP(i, 0, n)
#define SORT(c) sort((c).begin(), (c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false

int main()
{
    int w, n;
    cin >> w >> n;
    vector<int> k(w);
    rep(i, w)
    {
        k[i] = i + 1;
    }
    int a, b, c;
    rep(i, n)
    {
        scanf("%d, %d", &a, &b);
        c = k[a - 1];
        k[a - 1] = k[b - 1];
        k[b - 1] = c;
    }
    rep(i, w)
    {
        cout << k[i] << endl;
    }
    return 0;
}