#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int> 
#define F first 
#define S second 
#define int long long
#define mpr make_pair
typedef long long ll;

const int maxn = 210;
const int mod = 1e9+7;
const ll inf = 1e18+10;

bool good[maxn];
bool is(vector<int> s, int x)
{
    memset(good, 0, sizeof good);
    ll res = 0;
    for(int i = 61; i >= 0; i--)
        {
            int id = -1;
            for(int j = 0; j < s.size(); j++)
                if((s[j] & (1ll<<i)) && !good[j])
                    id = j;
            
            bool XX = ((1ll<<i) & x);
            bool YY = ((1ll<<i) & res);
            if((XX^YY) && id != -1) (res ^= s[id]);
            
            good[id] = 1; 
            for(int j = 0; j < s.size(); j++)
                if(id != j && ((1ll<<i) & s[j]))
                    s[j] ^= s[id];
        }
    if(res == x) return 1;
    else return 0;
}

int a[maxn];
signed main()
{
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


  //  cout<< is({7,6,5}, 3) <<" ";
    int q; cin>> q;
    while(q--)
    {
        int n; cin>> n;
        for(int i = 0; i < n; i++) cin>> a[i];
        string s; cin>> s;

        vector<int> ve;
        bool ans = 0;
      //  cout<<"\n";
        for(int i = n-1; i >= 0; i--)
        {
            if(s[i] == '0') ve.push_back(a[i]);
            else
                if(!is(ve,a[i]))
                {
             //       cout<< i <<" ";
                    ans = 1;
                    break;
                }
        }
        cout<< ans <<"\n";
    }
}
