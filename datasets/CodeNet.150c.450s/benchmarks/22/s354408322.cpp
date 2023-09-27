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
using namespace std;
#define inf 1000000007
#define int long long
#define rep(i,j,n) for(int i=j;i<n;i++)
typedef pair<int,int>  P;
struct edge{int from,to,cost;};
double pi = 3.141592653589793;
//ここから下
int v,e,r;
edge es[2145];
int d[1145];
bool  shortest_path(int s){
    rep(i,0,v)d[i]=inf;
    d[s]=0;
    int count=0;
    while(true){
        count++;
        if(count==v)return true;
        bool update=false;
        rep(i,0,e){
            edge e=es[i];
            if(d[e.from]!=inf&&d[e.to]>d[e.from]+e.cost){
                d[e.to]=d[e.from]+e.cost;update=true;
            }
        }
        if(!update)break;
    }
    return false;
}
signed main(){
    cin>>v>>e>>r;
    if(v==1){
        cout<<0<<endl;
        return 0;
    }
    rep(i,0,e){
        int a,b,c;cin>>a>>b>>c;
        es[i]=edge{a,b,c};
    }
    if(shortest_path(r)){
        cout<<"NEGATIVE CYCLE"<<endl;
        return 0;
    }
    rep(i,0,v){
        if(d[i]==inf)cout<<"INF"<<endl;
        else cout<<d[i]<<endl;
    }
    return 0;
}
