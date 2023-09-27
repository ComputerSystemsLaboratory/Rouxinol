//2020-07-31 
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define P(x) cout << #x  <<" = { "<< x<<" }\n"
#define PI acos(-1)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int M=2e5+5;


int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n , k ;cin>>n>>k;ll arr[n];
    loop(i,0,n)cin>>arr[i];
    int tail =0;
    loop(i , k , n){
        if(arr[i]>arr[tail])cout <<"Yes\n";
        else cout<<"No\n";
        tail++;
    }
    return 0;
}