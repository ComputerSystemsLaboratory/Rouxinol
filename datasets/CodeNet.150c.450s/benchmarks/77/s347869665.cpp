#include <bits/stdc++.h>
#include <boost/functional/hash.hpp>
#define DEBUG(x) cout<<#x<<": "<<x<<endl;
#define DEBUGM(xs) cout<<#xs<<": ";REP(_i,(int)xs.size())cout<<xs[_i]<<", ";cout<<endl;
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPR(i, n) for(int i = n; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(xs) begin(xs),end(xs)
#define _1 first
#define _2 second
#define P(k, v) make_pair(k, v)
#define PII pair<int, int>
using namespace std;
template<class T> using V = vector<T>;
template<class K> using uset = unordered_set<K, boost::hash<K>>;
template<class K, class V> using umap = unordered_map<K, V, boost::hash<K>>;
int dx[] = { 0, 1, 0, -1 }, dy[] = { 1, 0, -1, 0 }; // ??? ??? ??? ???

int main() {
    while(true){
        int n; scanf("%d", &n);
        if(n==0)return 0;
        uset<PII> hs;
        REP(i,n){int f,s;scanf("%d %d",&f,&s);hs.emplace(P(f,s));};
        int m; scanf("%d", &m);
        umap<char,int> conv = {{'N',0},{'E',1},{'S',2},{'W',3}};
        V<PII> xys(m);
        REP(i,m){char c;scanf(" %c %d",&c,&xys[i]._2);xys[i]._1=conv[c];}
        int x=10,y=10;
        REP(i,m){
            REP(j,xys[i]._2){
                x+=dx[xys[i]._1], y+=dy[xys[i]._1];
                hs.erase(P(x,y));
            }
        }
        if(hs.size()==0)printf("Yes\n");
        else printf("No\n");
    }
}