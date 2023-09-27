#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define    endl        '\n'
#define pii         pair<ll int,ll int>
#define all(v) (v).begin(), (v).end()
using namespace std;




void solve()
{
    ll n, k;
    cin >> n >> k;
    long  double x;
    std::vector<long double> v(n + 1);
    v[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        v[i] = v[i - 1] + log10(x);
        // cout<<v[i]<<" ";
    }

    for(int i = 2; i + k - 1 <= n; i++)
    {
        // cout<<i<<" "<<i+k-1<<v[i + k - 1] - v[i - 1] <<" " <<v[i + k - 2] - v[i - 2]<<endl;
        if(v[i + k - 1] - v[i - 1] <= v[i + k - 2] - v[i - 2])
        {
            cout << "No\n";
        }
        else
            cout << "Yes\n";


    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);


    int TESTS = 1;
    // cin >> TESTS;
    while(TESTS--)
    {
        solve();

    }
    return 0;
}