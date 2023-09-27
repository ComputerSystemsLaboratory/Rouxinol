#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const ll N = 2e6 + 7;

ll n , m , cnt , a;
vector<int>g[N];
ll used[N] , p[N];
string s;
int main(){
    cin >> n >> m;
    for( int i = 0; i < m;i ++ ){
            ll x , y;
        cin >> x >> y;
    g[x].pb(y);
    g[y].pb(x);
    }
    queue<int>q;
    q.push(1);
    p[1] = 1;
    used[1] = 1;
    while( !q.empty() ){
        int v = q.front();
        q.pop();
        for( int i = 0;i < g[v].size();i ++ ){
            int to = g[v][i];
            if( !used[to] ){
                used[to] ++;
                q.push(to);
                p[to] = (v);
            }
        }
    }
    for( int i = 2;i <= n;i ++ ){
        if( !used[i] )
            return cout << "No" , 0;
    }
    cout << "Yes" << endl;
    for( int i = 2;i <= n;i ++ ){
        cout << p[i] << "\n";
    }
}

