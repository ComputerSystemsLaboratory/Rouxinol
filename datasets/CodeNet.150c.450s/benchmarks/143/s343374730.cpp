#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    unordered_map<ll, ll> u;
    for (int i=0;i<n;i++)
        cin >> arr[i], sum += arr[i], u[arr[i]]++;
    
    ll q,b,c;
    cin >> q;
    for (int i=0;i<q;i++) {
        cin >> b >> c;
        ll bsum = u[b]*b;
        ll csum = u[b]*c;
        sum = sum - bsum + csum;
        u[c] += u[b];
        u[b] = 0;
        cout << sum << "\n";
    }
}