 #include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[100001] = {};
    ll sum = 0;
    for(int i = 0; i<n; i++)
    {
        ll c;
        cin >> c;
        sum += c;
        a[c]++;
    }

    int m;
    cin >> m;

    for(int i=0; i<m; i++)
    {
        ll b, c;
        cin >> b >> c;
        sum += (c-b)*a[b];
        a[c] += a[b];
        a[b] = 0;
        cout << sum << endl;
    }



}


int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll t;
    solve();
    return 0;
}
