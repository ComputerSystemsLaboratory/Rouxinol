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

        int cost = 0;
        int dist = 0;
        vector<pii> a(n);
        for(int i = 0;i < n;i++){
            cin >> a[i].second >> a[i].first;
            cost += a[i].second * a[i].first;
            dist += a[i].second;
        }

        int tmp = dist - m;
        if(tmp <= 0){
            cout << "0" << endl;
        }else{
            sort(a.begin(),a.end());
            int cnt = 0;
            int ans = 0;
            
            for(int i = 0;i < n;i++){
                if(cnt + a[i].second <= tmp){
                    ans += a[i].first * a[i].second;
                    cnt += a[i].second;
                }else{
                    while(cnt < tmp){
                        ans += a[i].first;
                        cnt++;
                    }
                }
            }
            cout << ans << endl;
        }

        a.shrink_to_fit();
    }
    return 0;
}
