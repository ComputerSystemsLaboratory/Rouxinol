#include <stdio.h>
#include <queue>
using namespace std;
struct side{
    int to;
    int cost;
};
struct walk{
    int now;
    int cost;
};
int main(){
    int n,l,m,d[100];
    queue<walk> q;
    vector<side> map[100];
    walk temp,t;
    side s;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&l,&m);
        d[i]=-1;
        for(int j=0;j<m;j++){
            scanf("%d%d",&s.to,&s.cost);
            map[l].push_back(s);
        }
    }
    temp.now=temp.cost=0;
    q.push(temp);
    while(!q.empty()){
        temp=q.front();
        q.pop();
        if(d[temp.now]!=-1&&d[temp.now]<=temp.cost)continue;
        d[temp.now]=temp.cost;
        for(int i=0;i<map[temp.now].size();i++){
            t.cost=temp.cost+map[temp.now][i].cost;
            t.now=map[temp.now][i].to;
            q.push(t);
        }
    }
    for(int i=0;i<n;i++){
        printf("%d %d\n",i,d[i]);
    }
}