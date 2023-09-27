#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<string>
#include<cmath>
#include<cstring>
#include<queue>
#include<map>
#include<climits>
#include<set>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;
typedef pair<ll,ll> pll;
int dx[4] = {1,0,0,-1};
int dy[4] = {0,1,-1,0};
#define MOD 1000000007
#define ARRAY_MAX 100005

const int INF = 1e9+7;


int main(){

    int n,m;
    while(cin >> n >> m,n|m){

        vector<int> h(n+10,0),w(m+10,0);
        vector<int> hs(n+10,0),ws(m+10,0);
        for(int i = 0;i < n;i++){
            cin >> h[i];
        }
        for(int i = 0;i < m;i++){
            cin >> w[i];
        }
        for(int i = 1;i <= n;i++){
            hs[i] = hs[i-1] + h[i-1];
        }
        for(int i = 1;i <= m;i++){
            ws[i] = ws[i-1] + w[i-1];
        }

        map<int,int> H,W;
        for(int i = 0;i <= n;i++){
            for(int j = i+1;j <= n;j++){
                H[hs[j]-hs[i]]++;
            }
        }
        for(int i = 0;i <= m;i++){
            for(int j = i+1;j <= m;j++){
                W[ws[j]-ws[i]]++;
            }
        }
        int ans = 0;
        for(auto itr:H){
            ans += H[itr.first] * W[itr.first];
        }
        cout << ans << endl;
        
    }



    return 0;
}
