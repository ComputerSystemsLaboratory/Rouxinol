#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
#define ld long double
#define pii 3.14
#define mod (ll)(1e9+7)
#define inf (ll)(1e18)
#define lim (ll)(1e10)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
#define pi pair<int,int>
#define N (ll)(2e5 + 5)

void solve()
{
    ll n;
    cin>>n;

    string s;

    ll a=0,b=0,c=0,d=0;

    while(n--)
    {
        cin>>s;
        if(s == "AC")
            a++;
        else if(s == "WA")
            b++;
        else if(s == "TLE")
            c++;
        else
            d++;
    }

    cout<<"AC x "<<a<<"\n";
    cout<<"WA x "<<b<<"\n";
    cout<<"TLE x "<<c<<"\n";
    cout<<"RE x "<<d<<"\n";

}

int main()
{
    fio;
    ll tc = 1;
    //cin>>tc;
    while(tc--)
    {
        solve();
    }
}
