#include<bits/stdc++.h>


using namespace std;
const int maxn=10002;
int fa[maxn];
int n;
void init(){
    for(int i=1;i<=n;i++)
        fa[i]=i;
}

int find(int x){
    int y=fa[x];
    for(;fa[y]!=y;y=fa[y]);
    while(x!=y){
        int temp=fa[x];
        fa[x]=y;
        x=temp;
    }
    return y;
}

void merge(int x,int y){
    int nx=find(x);
    int ny=find(y);
    if(nx!=ny){
        fa[nx]=ny;
    }
}

int main(){
    int q;
    cin>>n>>q;
    init();
    while(q--){
        int com,x,y;
        cin>>com>>x>>y;
        if(com==0)
            merge(x,y);
        else{
            if(find(x)!=find(y)) cout<<"0"<<endl;
            else cout<<"1"<<endl;
        }


    }
}