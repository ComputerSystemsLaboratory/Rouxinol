#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/range/adaptor/reversed.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
typedef long long int ll;

#define PI (acos(-1))
#define REP(i,n) for(ll (i)=0;(i)<(n);(i)++)

#define dump(x)  cerr << #x << " = " << (x) << endl;
#define dumparr(x) cerr << #x ; for(auto elem: x){cerr << " " << elem;} cerr << endl;
#define dumppairs(x) cerr << #x ; for(auto elem: x){cerr << "(" << elem.first << " " << elem.second << ") ";} cerr << endl;
#define dumpline cerr << "**********************" << endl;
#define dumpwline(x) cerr << "******** " << #x << "=" << (x) << " ********" << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))

int main(void){
    ll n; cin >> n;
    vector <vector <ll>> graph(n, vector<ll>());
    ll m; cin >> m;
    REP(i, m){
        ll a; ll b;
        cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    queue <ll> q;
    q.push(0);
    vector <ll> parents(n, -1);
    parents[0] = 0;
    while(!q.empty()){
        ll now = q.front();
        q.pop();
        for(auto next: graph[now]){
            if (parents[next] != -1){
                continue;
            }
            q.push(next);
            parents[next] = now;
        }
    }
    cout << "Yes" << endl;
    for(ll i=1; i<n; i++){
        cout << parents[i] + 1 << endl;
    }
    return 0;
}