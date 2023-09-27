#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
const int INF = 100000000;
using namespace std;

int main(){
    int n;
    while(cin >> n,n){
        int a[1000];
        rep(i,n) cin >> a[i];

        int ans = INF;
        rep(i,n){
            rep(j,n){
                if(i == j) continue;
                ans = min(ans, abs(a[i] - a[j]));
            }
        }
        cout << ans << endl;
    }
}