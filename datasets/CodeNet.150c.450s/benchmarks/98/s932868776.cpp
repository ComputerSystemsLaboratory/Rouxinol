#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vbb;
typedef pair<int, int> pii;
typedef long long ll;
typedef unsigned long long ull;

#define all(a)  (a).begin(),(a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pb push_back
#define mp make_pair

#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)

const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

int main(){
    int n, m;
    int a[110], b[110];
    while(cin >> n >> m, n+m){
        int asum=0, bsum=0;
        for(int i=0; i< n ; i++){cin >> a[i]; asum += a[i];}
        for(int i=0; i< m ; i++){cin >> b[i]; bsum += b[i];}
        pair<int, int> ans;
        int diff = 10000;
        for(int i=0; i< n; i++){
            for(int j=0; j< m; j++){
                if(asum - a[i] + b[j] == bsum - b[j] + a[i] && a[i]+b[j] < diff){
                    diff = a[i]+b[j];
                    ans.first = a[i]; ans.second = b[j];
                }
            }
        }
        if(diff == 10000) cout << -1 << endl;
        else cout << ans.first << " " << ans.second << endl;
    }
}