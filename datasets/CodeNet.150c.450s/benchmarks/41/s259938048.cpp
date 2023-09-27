#include <numeric>
#include<iostream>
#include<set>
#include<queue>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
#include <sstream>
#include<string>
#include <cmath>
#include <iomanip>
#include <string>
#include<list>
#include<string.h>
#include<memory.h>
using namespace std;
#define inf 100000000007
#define int long long
#define rep(i,j,n) for(int i=j;i<n;i++)
typedef pair<int,int>  P;
struct edge{int from,to,cost;};
double pi = 3.141592653589793;
//ここから下
int v,e;
edge es[11451];
int d[114];
bool find_negative_loop(){
    memset(d,0,sizeof(d));
    rep(i,0,v){
        rep(j,0,e){
            edge e=es[j];
            if(d[e.to]>d[e.from]+e.cost){
                d[e.to]=d[e.from]+e.cost;
                if(i==v-1)return true;
            }
        }
    }
    return false;
}

void shortest_path(int s){
    rep(i,0,v)d[i]=inf;
    d[s]=0;
    while(true){
        bool update=false;
        rep(i,0,e){
            edge e=es[i];
            if(d[e.from]!=inf&&d[e.to]>d[e.from]+e.cost){
                d[e.to]=d[e.from]+e.cost;update=true;
            }
        }
        if(!update)break;
    }
}
signed main(){
    cin>>v>>e;
    if(v==1){
        cout<<0<<endl;
        return 0;
    }
    rep(i,0,e){
        int a,b,c;cin>>a>>b>>c;
        es[i]=edge{a,b,c};
    }
    if(find_negative_loop()){
        cout<<"NEGATIVE CYCLE"<<endl;
        return 0;
    }
    rep(i,0,v){
        shortest_path(i);
        rep(j,0,v-1){
            if(d[j]==inf)cout<<"INF"<<" ";
            else cout<<d[j]<<" ";
        }if(d[v-1]==inf)cout<<"INF"<<endl;
        else cout<<d[v-1]<<endl;
    }
    return 0;
}
