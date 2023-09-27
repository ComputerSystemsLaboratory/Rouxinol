#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int,int> pii;
typedef vector<int> vint;
const int inf=1e9;
int dist[1010];
int s[2010],t[2010],d[2010];
int main(){
    int v,e,r;  cin>>v>>e>>r;
    for(int i=0;i<v;i++)    dist[i]=inf;
    dist[r]=0;
    for(int i=0;i<e;i++)    cin>>s[i]>>t[i]>>d[i];
    int i=0;
    for(;i<v;i++){
        bool updated=false;
        for(int j=0;j<e;j++){
            if(dist[s[j]]==inf) continue;
            if(dist[t[j]]>dist[s[j]]+d[j]){
                updated=true;
                dist[t[j]]=dist[s[j]]+d[j];
            }
        }
        if(updated==false)   break;
    }
    if(i<v){
        for(int i=0;i<v;i++){
            if(dist[i]==inf)    cout<<"INF"<<endl;
            else    cout<<dist[i]<<endl;
        }
    }
    else    cout<<"NEGATIVE CYCLE"<<endl;
    return 0;
}