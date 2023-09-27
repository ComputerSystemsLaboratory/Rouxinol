#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 40;
#define FOR(i,k,n) for(int i=(k);i<(n);++i)

struct edge {int from, to; ll cost;};
vector<edge> es(2005);
vector<ll> d(1005);
int V, E;

bool negativeloop(int s){
    FOR(i,0,V) d[i]=INF;
    d[s]=0;
    FOR(i,0,V){
        FOR(j,0,E){
            edge e=es[j];
            if(d[e.from]!=INF && d[e.to]>d[e.from]+e.cost){
                d[e.to] = d[e.from] + e.cost;
                if(i==V-1)return true;
            }
        }
    }
    return false;
}

void ford(int s){
    FOR(i,0,V) d[i]=INF;
    d[s]=0;
    while(1){
        bool update=false;
        FOR(i,0,E){
            edge e=es[i];
            if(d[e.from]!=INF && d[e.to]>d[e.from]+e.cost){
                d[e.to]=d[e.from]+e.cost;
                update=true;
            }
        }
        if(!update) break;
    }
} 

int main(){
    cin >> V >> E;
    int st; cin >>st;
    int x,y; ll co;
    edge ed;
    FOR(i,0,E){
        cin >> x >> y >> co;
        ed.from=x;
        ed.to=y;
        ed.cost=co;
        es[i]=ed;
    }
    bool f = negativeloop(st);
    if(f) cout << "NEGATIVE CYCLE" << endl;
    else{
        ford(st);
        FOR(i,0,V){
            if(d[i]==INF) cout<<"INF"<<endl;
            else cout << d[i] << endl;
        }
    }
    return 0;
}

