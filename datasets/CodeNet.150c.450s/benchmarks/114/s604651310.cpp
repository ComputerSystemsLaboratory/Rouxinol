#include<stdio.h>
#include<queue>
#include<vector>
using namespace std;
const int maxn = 1010;
const int INFTY = 1000000000;
struct Node{
    int to;
    int value;
    void set(int a,int b){
        to  = a;
        value = b;
    }
    void real(){
        value*=-1;
    }
};
bool operator<(const Node&a,const Node &b){
    return a.value<b.value;
}
vector<Node> g[maxn];
priority_queue<Node> q;
int d[maxn];
bool vis[maxn];
int p[maxn];
int n;
void prim(){
    for(int i = 0;i<n;++i){
        d[i] = INFTY;
        vis[i] = false;
        p[i] = -1;
    }
    d[0] = 0;
    Node work;
    work.set(0,0);
    q.push(work);
    while(!q.empty()){
        work = q.top();
        work.real();
        q.pop();
        int from = work.to;
        int len = g[from].size();
        if(vis[from])continue;
        vis[from] = true;
        while(len--){
            int to = g[from][len].to;
            int add = g[from][len].value;
            if(!vis[to]&&(add<d[to])){
                d[to] = add;
                p[to] = from;
                work.set(to,d[to]);
                work.real();
                q.push(work);
            }
        }
    }
}
int main(){
    int tmp,ans;
    Node work;
    scanf("%d",&n);
    for(int i = 0;i<n;++i){
        for(int j  = 0;j<n;++j){
            scanf("%d",&tmp);
            if(tmp!=-1){
                work.set(j,tmp);
                g[i].push_back(work);
            }
        }
    }
    prim();
    ans = 0;
    for(int i = 0;i<n;++i){
        ans+=d[i];
    }
    printf("%d\n",ans);
    return 0;
}

