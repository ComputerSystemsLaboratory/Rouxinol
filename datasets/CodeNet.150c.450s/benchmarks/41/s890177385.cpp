#include<utility>
#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<cmath>
#include<numeric>
#include<cassert>
#include<random>
using namespace std;
#define MK make_pair
#define F first
#define S second
#define ege pair<int,pair<int,int>> //w,s,t
typedef long long int ll;
const ll MX=1e13;






int main(){
    int v,e;
    ll dis[1000][1000];
    fill(&dis[0][0],&dis[999][1000],MX);
    for(int i=0;i<1000;i++){
        dis[i][i]=0;
    }
    cin>>v>>e;
    for(int i=0;i<e;i++){
        int s,t,d;
        cin>>s>>t>>d;
        if(dis[s][t]>d){dis[s][t]=d;}
    }
    for(int i=0;i<v;i++){
        for(int t=0;t<v;t++){
            for(int h=0;h<v;h++){
                if(dis[t][i]==MX || dis[i][h]==MX){continue;}
                if(dis[t][h]>dis[t][i]+dis[i][h]){dis[t][h]=dis[t][i]+dis[i][h];}
            }
        }
    }
    bool j=false;
    for(int i=0;i<v;i++){
        for(int t=0;t<v;t++){
            if(dis[i][t]+dis[t][i]<0){j=true; break;}
        }
    }
    if(j){cout<<"NEGATIVE CYCLE"<<endl; return 0;}
    for(int i=0;i<v;i++){
        for(int t=0;t<v;t++){
            if(dis[i][t]==MX){cout<<"INF";}
            else{cout<<dis[i][t];}
            if(t!=v-1){cout<<" ";}
        }
        cout<<endl;
    }
    
    return 0;
}


