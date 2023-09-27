#include<iostream>
#include<algorithm>
using namespace std;
int p[101],r[101];
void makeset(int x){
    for(int i=0;i<x;++i){
        p[i]=i;
        r[i]=0;
    }
}
int root(int a){
    if(a!=p[a])
        p[a]=root(p[a]);
    return p[a];
}
bool same(int a,int b){
    return (root(a)==root(b));
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
    link(root(a),root(b));
}
struct Edges{int cost,src,dst;}edges[10010];
bool operator<(const Edges &x,const Edges &y){return x.cost<y.cost;}
int main(){
    int N,M=0;
    int A[101][101];
    cin>>N;
    makeset(N);
    for(int r=0;r<N;++r){
        for(int c=0;c<N;++c){
            cin>>A[r][c];
        }
        for(int c=r+1;c<N;++c){
            if(A[r][c]>-1){
                edges[M].cost=A[r][c];
                edges[M].src=r;
                edges[M].dst=c;
                M+=1;
            }
        }
    }
    sort(edges,edges+M);
    int total=0,num=0,flag=0;
    for(int i=0;i<M;++i){
        if(same(edges[i].src,edges[i].dst)){continue;}
        else{
            unite(edges[i].src,edges[i].dst);
            total+=edges[i].cost;
            num++;
        }
        if(num==N-1){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<total<<endl;
    }
}