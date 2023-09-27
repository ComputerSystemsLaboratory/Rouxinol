#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

struct UnionFind{
    vector<int> data;
    UnionFind(int size) : data(size,-1){}
    bool unite(int x,int y){
        x=root(x),y=root(y);
        if(x!=y){
            if(data[y]<data[x]){
                swap(x,y);
            }
            data[x]+=data[y],data[y]=x;
        }
        return x!=y;
    }

    bool find(int x,int y){
        return root(x)==root(y);
    }

    int root(int x){
        return data[x]<0 ? x : data[x]=root(data[x]);
    }

    int size(int x){
        return -data[root(x)];
    }
};

int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    UnionFind uf(n);
    for(int i=0;i<q;i++){
        int c,x,y;
        scanf("%d %d %d",&c,&x,&y);
        if(c!=0){
            if(uf.find(x,y)){
                printf("%d\n",1);
            }else{
                printf("%d\n",0);
            }
        }else{
            uf.unite(x,y);
        }
    }
    return 0;
}