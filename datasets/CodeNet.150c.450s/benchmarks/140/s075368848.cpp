#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <algorithm>
using namespace std;
typedef pair<int,int> pii;
typedef vector<int> vint;
#define mp make_pair
#define fst first
#define scn second
const int inf=1e9;
int color[10010];
int findparent(int i){
    return (i==color[i]?i:color[i]=findparent(color[i]));
}
void merge(int i,int j){
    i=findparent(color[i]);
    j=findparent(color[j]);
    color[j]=i;
}
int main(){
    int v,e;    cin>>v>>e;
    priority_queue<pair<int,pii > > pq;
    for(int i=0;i<e;i++){
        int s,t,w;  cin>>s>>t>>w;
        pq.push(mp(-w,mp(s,t)));
    }
    for(int i=0;i<v;i++)    color[i]=i;
    int ret=0;
    while(!pq.empty()){
        auto it=pq.top();   pq.pop();
        int w=-it.fst;
        int s=it.scn.fst,t=it.scn.scn;
        if(findparent(s)==findparent(t))    continue;
        ret+=w;
        merge(s,t);
    }
    cout<<ret<<endl;
    return 0;
}