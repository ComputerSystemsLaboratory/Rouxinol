#include<bits/stdc++.h>

using namespace std;
const int maxn=100000+5;

int fa[maxn];
int V,E;
void init(){
    for(int i=1;i<=V;i++)
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
    cin>>V>>E;
    init();
    while(E--){
        int in,out;
        cin>>in>>out;
        merge(in,out);
    }
    int T;
    cin>>T;
    while(T--){
        int x,y;
        cin>>x>>y;
        if(find(x)!=find(y)) cout<<"no"<<endl;
        else cout<<"yes"<<endl;
    }
}