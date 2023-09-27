#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define _USE_MATH_DEFINES
#include <math.h>
#define rep(i,n) for(int i = 0;i < n;i++)
#define NIL = -1;
#define all(x) x.begin(),x.end()
const ll INF = 1LL<<60;
const ll mod = 1e9 + 7;
 
int digit(ll x) {
    if (x / 10 == 0) return 1;
    return digit(x / 10) + 1;
}
 
ll gcd(long long a,long long b) {
    if (a < b) swap(a,b);
    if (b == 0) return a;
    
    return gcd(b,a%b);
}
 
ll lcm(ll a,ll b){
    return ((a * b == 0)) ? 0 : (a / gcd(a,b) * b);
}
 
double DegreeToRadian(double degree){
    return degree * M_PI / 180.0;
}
 
 
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
 
 
///////////////////////////////////////////////////////////////////////////////////

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for (int i = 0;i < m;i++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> dist(n, -1);
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for (int i = 0;i < g[node].size();i++){
            int next = g[node][i];
            if (dist[next] == -1){
                dist[next] = node;
                q.push(next);
            }
        }
    }
    cout << "Yes" << endl;
    for (int i = 1;i < n;i++){
        cout << dist[i] + 1 << endl;
    }
}