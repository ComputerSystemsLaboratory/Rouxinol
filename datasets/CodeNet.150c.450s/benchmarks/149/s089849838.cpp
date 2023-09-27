#include<iostream>
using namespace std;
int p[100010],r[100010];
void makeset(int x){
    for(int i=0;i<x;++i){
        p[i]=i;
        r[i]=0;
    }
}
int findset(int a){
    if(a!=p[a])
        p[a]=findset(p[a]);
    return p[a];
}
bool same(int a,int b){
    return (findset(a)==findset(b));
}

void link(int a,int b){
    if(r[a]>r[b]){
        p[b]=a;
    }
    else{
        p[a]=b;
        if(r[a]==r[b]){
            r[b]++;
        }
    }
}
void unite(int a,int b){
    link(findset(a),findset(b));
}
int main(){
    int n,q;
    cin>>n>>q;
    makeset(n);
    int x[100001],y[100001],comp[100001];
    for(int i=0;i<q;++i){
        cin>>comp[i]>>x[i]>>y[i];
        if(comp[i]==0){
            unite(x[i],y[i]);
        }
        else if(comp[i]==1){
            int t=same(x[i],y[i]);
            cout<<t<<endl;
        }
    }
}