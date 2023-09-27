#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
#define PI       3.1415926535897932384626433832795028841971
#define INF 1000000000
#define EPS      1e-10
#define MOD      1000000007
using namespace std;
typedef long long ll;
typedef pair<double,double> P;
typedef pair<double,P> PQ;

int n;
int a[100000];

int main(){
    while(cin >> n){
        if(n == 0) break;
        memset(a,0,sizeof(a));
        rep(i,n) cin >> a[i];
        sort(a,a+n);
        int ans = INF;
        for(int i = 1; i < n; i++) ans = min(ans,a[i]-a[i-1]);
        cout << ans << endl;
    }
}