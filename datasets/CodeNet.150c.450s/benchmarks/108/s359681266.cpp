#include <bits/stdc++.h>
#include<math.h>
#define rep(i,n) for (int i = 0; i < (n) ; ++i)
using namespace std;
using ll = long long ;
using P = pair<int , int> ;
#define PI 3.14159265358979323846264338327950
#define INF 1e18 

int main() {
    int n ;
    cin >> n ;
    vector<int> list [n] ;
    rep(i, n){
        int v, k;
        cin >> v >> k ;
        v-- ;
        rep(j, k){
            int g ;
            cin >> g  ;
            g-- ;
            list[v].push_back(g) ;
        }
    }
    queue<P> que ;
    vector<int> d (n, -1) ;
    que.push(P(0, 0)) ;
    while(!que.empty()) {
        P st = que.front() ;
        que.pop() ;
        if(d[st.first] > -1){
            continue ;
        }
        else {
            int f = st.first ;
            int e = st.second ;
            d[f] = e ;
            for(int u : list[f]){
                que.push(P(u, e + 1)) ;
            }
        }
 
    }
    rep(i, n){
        cout << i + 1 << " " << d[i] << endl ;
    }
}

