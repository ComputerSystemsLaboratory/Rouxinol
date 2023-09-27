#define MOD 1000000007
#define  endll   "\n"
#define  ll long long
#define vi vector<int>
#define vll vector<ll>

#include <bits/stdc++.h>

using namespace std;
int const N = 2e5 + 5;
ll arr[N];
set<pair<int, int>> st;
int flag[N];

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    //freopen("input", "rt", stdin);
    //freopen("output", "wt", stdout);
#endif
    int n;
    cin>>n;
    map<ll, ll> mp;
    for (ll i = 1; i <= 100; i++) {
        for (ll j = 1; j <= 100; j++)
            for (ll k = 1; k <= 100; k++) mp[i * i + j * j + k * k + i * k + k * j + j * i]++;
    }
    for (int i = 1; i <= n; i++)
        cout << mp[i] << endll;
}