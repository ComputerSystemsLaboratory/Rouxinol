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
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<vii> vvii;

const int INF = 1000000000;
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
    int n,m,r;
    cin>>n>>m>>r;
    vvii graph(n);
    F(i,0,m){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back(ii(v,w));
    }
    // bellman ford
    vi dist(n,INF);
    dist[r]=0;
    F(k,0,n){
        // relax every edge
        F(u,0,n){
            for(ii e: graph[u]){
                int v,w;
                tie(v, w) = e;
                if(dist[u]<INF)
                    dist[v]=min(dist[v],dist[u]+w);
            }
        }
    }
    vi dist2(dist);
    F(u,0,n){
            for(ii e: graph[u]){
                int v=e.first,w=e.second;
                if(dist[u]<INF)
                    dist2[v]=min(dist[v],dist[u]+w);
            }
        }
    if(dist!=dist2){
        cout<<"NEGATIVE CYCLE\n";
    } else {
        F(i,0,n){
            if(dist[i]==INF) cout<<"INF";
            else cout<<dist[i];
            if(i<n-1) cout<<"\n";
        }
        cout<<"\n";
    }
}