#include<bits/stdc++.h>

using namespace std;

#define int long long
#define pii pair<int,int>
#define F first
#define S second
#define mpr make_pair
typedef long long ll;

const int maxn = 210;
const int mod = 1e9+7;
const ll inf = 1e18+10;

bool good[maxn];
bool is(vector<int> a, int x)
{
    int n = a.size();

    memset(good, 0, sizeof good);
    int X = x;
    for(int j = 0; j <= 60; j++)
        for(int i = 0; i < n; i++)
            if((a[i]&(1ll<<j)) && !good[i])
            {
                good[i] = 1;
                for(int k = 0; k < n; k++)
                    if(k != i && !good[k] && (a[k] & (1ll<<j)))
                        (a[k] ^= a[i]);
                if((X&(1ll<<j))) (X ^= a[i]);
                break;
            }
    return (X == 0);
}

int a[maxn];
signed main()
{
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int q; cin>> q;
    while(q--)
    {
        int n; cin>> n;
        for(int i = 0; i < n; i++) cin>> a[i];
        string s; cin>> s;

        vector<int> ve;
        bool ans = 0;

        for(int i = n-1; i >= 0; i--)
        {
            if(s[i] == '0') ve.push_back(a[i]);
            else
                if(!is(ve,a[i]))
                {
                    ans = 1;
                    break;
                }
        }
        cout<< ans <<"\n";
    }
}
