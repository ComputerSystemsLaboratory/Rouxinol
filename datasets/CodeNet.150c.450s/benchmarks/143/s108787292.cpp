#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
typedef vector<int> vi;
#define endl '\n'
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define rf(i,a,b) for(int i=a;i>=b;i--) 
#define fast_io ios_base::sync_with_stdio(0);
#define show(x) cout<<x<<endl;
#define pret(x) cout<<x<<endl; return 0;
#define disp(x) cout<<x<<" ";
#define let(x,y) cout<<x<<" "<<y<<endl;
ll MOD=1e9+7;
const int maxn=2e5+5;

int cnt[maxn];

int32_t main(){
    fast_io;
    int n;
    cin >> n;
    int a[n + 1];
    int tot = 0;
    fo(i, 1, n) cin >> a[i], tot += a[i], cnt[a[i]]++;
    int q;
    cin >> q;
    while(q--){
    	int x,y;
    	cin >> x >> y;
    	int k = cnt[x];
    	tot -= k * x;
    	tot += k * y;
    	cnt[x] -= k;
    	cnt[y] += k;
    	show(tot);
    }
    return 0;
}