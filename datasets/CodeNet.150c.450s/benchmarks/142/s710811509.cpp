#include <bits/stdc++.h>
#define ll          long long int
#define uu          first
#define vv          second
#define pii         pair<int,int>
#define pll         pair<ll,ll>
#define fastio      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
const int INF = 1e9;
const ll MOD = 1e9 + 7;

const int N = 1e6 + 6;

int main()  {
    fastio;
    int n , k;
    cin>>n>>k;
    vector<int>vec(n);
    for(int i =0 ; i < n ; i++ ) cin>>vec[i];
    for(int i = 0 , j = k ; j < n; j++, i++ ) {
        if(vec[j] > vec[i]) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}