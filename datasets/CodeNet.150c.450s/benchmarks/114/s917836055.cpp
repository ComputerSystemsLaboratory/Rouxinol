#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
typedef pair<int,int> P;
typedef pair<int,P> T;

class uft {//union-find tree
public:
    int parent[101];
    int size[101];
    int root(int x);
    bool same(int x,int y);
    void unite(int x,int y);
};
int uft::root(int x){
    if(parent[x]==x){
        return x;
    }
    return parent[x] = root(parent[x]);
}
bool uft::same(int x,int y){
    if(root(x)==root(y)){
        return true;
    }else{
        return false;
    }
}
void uft::unite(int x,int y){
    x=root(x);
    y=root(y);
    if(x == y) return;
    parent[x] = y;
    size[y] = size[y]+size[x];
}

int solv(priority_queue<T, vector<T>, greater<T> > q,int N){
    uft u;
    for(int i=0;i<N;i++){
        u.parent[i]=i;
        u.size[i]=1;
    }
    int ret=0;
    while(u.size[u.root(0)] != N && !q.empty()){
        T edge = q.top(); q.pop();
        if(u.root((edge.second).first) != u.root((edge.second).second)){
            u.unite((edge.second).first,(edge.second).second);
            ret += edge.first;
        }
    }
    return ret;
}

int main(){
    int N;
    priority_queue<T, vector<T>, greater<T> > q;
    cin>>N;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int a;
            cin>>a;
            if(a!=-1 && i<j){
                T d = T(a,P(i,j));
                q.push(d);
            }
        }
    }
    int ans=solv(q,N);
    cout<<ans<<endl;
    return 0;
}