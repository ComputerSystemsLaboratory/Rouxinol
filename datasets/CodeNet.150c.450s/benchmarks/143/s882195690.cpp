/*
* @Author: dnhirapara
* @Problem: abc171_d
* @Time: 07-September-2020 : ( 16:27:38 )
*/
#include <bits/stdc++.h>

using namespace std;

/************defination************/

#define endl "\n"
#define logger(x) cout << __LINE__ << ": " << #x << " -> " << (x) << endl;
#define ll long long int
#define ull unsigned long long int

//@time comp :
//@space comp :
int main()
{
    // ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    // cin.ignore(); must be there when using getline(cin, s)
    ll tc = 1;
    //cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<ll> fre(100005, 0);
        vector<ll> a(n);
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            fre[a[i]]++;
            sum += a[i];
        }
        ll q;
        cin >> q;
        while (q--)
        {
            ll b, c;
            cin >> b >> c;
            sum = sum - (fre[b] * b) + (fre[b] * c);
            fre[c] += fre[b];
            fre[b] = 0;
            cout << sum << endl;
        }
    }
    return 0;
}