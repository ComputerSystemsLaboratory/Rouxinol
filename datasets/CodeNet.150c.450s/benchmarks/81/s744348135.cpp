#include <iostream>
#include <vector>
#include <cstring>
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define pb push_back
using namespace std;

struct edge {
    int to,from,cost;
};

bool app[11];
const int INF = 10000000;
vector<edge> E;
int d[11];

int wf(int a){
    FOR(i,0,11)d[i]=10000000;
    d[a]=0;
    while(1){
        bool update=false;
        FOR(i,0,E.size()){
            edge&e=E[i];
            if(d[e.to]>d[e.from]+e.cost){
                update=1;
                d[e.to]=d[e.from]+e.cost;
            }
        }
        if(!update) break;
    }
    int sum=0;
    FOR(i,0,11){
        if(app[i]) sum+=d[i];
    }
    return sum;
}

int main(){
    int n;
    while(1){
        cin>>n;
        if(!n) break;
        E.clear();
        memset(app,0,sizeof(app));
        FOR(i,0,n){
            int a,b,c; cin>>a>>b>>c;
            E.pb({a,b,c});
            E.pb({b,a,c});
            app[a]=app[b]=1;
        }
        int ans=INF;
        int town;
        FOR(i,0,11){
            if(!app[i])continue;
            int t=wf(i);
            if(ans>t){
                ans=t;
                town=i;
            }
        }
        cout<<town<<" "<<ans<<endl;
    }
}