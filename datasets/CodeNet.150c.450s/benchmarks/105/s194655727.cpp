#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

typedef long long ll;

ll T;
ll n;
ll a[205];
string s;
vector<ll> ve;

int main()
{
    scanf("%lld", &T);
    while(T--)
    {
        bool v = false;
        ve.clear();
        scanf("%lld", &n);
        for(ll i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
        }
        cin>>s;
        for(ll i = n - 1; i >= 0; i--)
        {
            for(ll j = 0; j < ve.size(); j++)
            {
                a[i] = min(a[i], a[i] ^ ve[j]);
            }
            if(s[i] == '0')
            {
                if(a[i] > 0) ve.push_back(a[i]);
            }
            else if(a[i] > 0)
            {
                printf("1\n");
                v = true;
                break;
            }
        }
        if(!v) printf("0\n");
    }
    return 0;
}
