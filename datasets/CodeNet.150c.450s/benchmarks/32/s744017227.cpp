#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
#define PI       3.1415926535897932384626433832795028841971
#define INF 1000000000
#define EPS      1e-10
#define MOD      1000000
using namespace std;
typedef long long ll;
typedef pair<double,double> P;
typedef pair<double,P> PQ;

int m, n, N;
int p[10001];

int main(){
    while(cin >> m >> n >> N){
        if(n == 0 && N == 0 && m == 0) break;
        rep(i,m) cin >> p[i];
        sort(p,p+m,greater<int>());
        int ans = 0;
        int out = 0;
        for(int i = n-1; i < N; i++){
            if(ans <= p[i]-p[i+1]){
                ans = p[i]-p[i+1];
                out = i+1;
            }
        }
        cout << out << endl;
    }
}