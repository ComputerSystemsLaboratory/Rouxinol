//  Created by Vignesh Manoharan

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <numeric>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<int,int> ii;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<vii> vvii;

const int INF = 2000000000;
const ll LINF = 1e17;
const double PI =3.141592653589793238;
const int mod=1000000007;
const double eps = 0.000001;

#define F(i,a,n) for(int i=(a);i<(n);i++)

template<typename T,typename TT> ostream& operator<<(ostream &s,pair<T,TT> t) {return s<<"("<<t.first<<","<<t.second<<")";}
template<typename T> ostream& operator<<(ostream &s,vector<T> t){
    for(int i=0;i<(t).size();i++)s<<t[i]<<((i<(t).size()-1)?" ":"");return s; }
template<typename T> ostream& operator<<(ostream &s,set<T> t){for(T x:t) s<<x<<" ";return s; }
template<typename T> istream& operator>>(istream &s,vector<T> &t){
    for(int _i=0;_i<t.size();_i++) s>>t[_i];return s; }

#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()

int main(int argc, const char * argv[]) {
    #ifdef LOCAL_TEST
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    #endif
    int n,m;
    cin>>n>>m;
    vvii graph(n);
    F(i,0,m){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back(ii(v,w));
    }
    // floyd warshall
    vvi dist(n,vi(n,INF));
    F(u,0,n) dist[u][u]=0;
    F(u,0,n) for(ii e: graph[u]){
        int v,w;
        tie(v,w)=e;
        dist[u][v]=w;
    }
    F(k,0,n){
        // relax every dist
        F(u,0,n){
            F(v,0,n){
                if(dist[u][k]<INF && dist[k][v]<INF)
                    dist[u][v]=min(dist[u][v],dist[u][k]+dist[k][v]);
            }
        }
    }
    vvi dist2(dist);
    int k=0;
    F(k,0,n){
        // relax every dist
        F(u,0,n){
            F(v,0,n){
                if(dist[u][k]<INF && dist[k][v]<INF)
                    dist[u][v]=min(dist[u][v],dist[u][k]+dist[k][v]);
            }
        }
    }
    if(dist!=dist2){
        cout<<"NEGATIVE CYCLE\n";
    } else {
        F(i,0,n){
            F(j,0,n){
            if(dist[i][j]==INF) cout<<"INF";
            else cout<<dist[i][j];
            if(j<n-1) cout<<" ";
            }
            cout<<"\n";
        }
    }
}