#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
#define eps 1e-6

typedef long long LL;
const double pi = acos(-1.0);
const long long mod = 1e9;
using namespace std;

int N,K;
LL T[100005];

int check(LL P)
{
    int i = 0;
    for(int j = 0;j < K;j++)
    {
        LL S = 0;
        while(S + T[i] <= P)
        {
            S += T[i];
            i++;
            if(i == N)
                return N;
        }
    }
    return i;
}

int solve()
{
    LL l = 0,r = 100000 * 10000;
    LL mid;
    while(r - l > 1)
    {
        mid = (l + r) / 2;
        int v = check(mid);
        if(v >= N)
            r = mid;
        else
            l = mid;
    }
    return r;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    //freopen("int.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    cin >> N >> K;
    for(int i = 0;i < N;i++)
        cin >> T[i];
    LL ans = solve();
    cout << ans << endl;
    return 0;
}

