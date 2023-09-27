#include <iostream>
#include <string.h>
using namespace std;
#include <queue>
int main (){
    long D[100000];
    for(int i=0;i<100000;i++){
        D[i]=1000000000;
    }
    int V,E,r;
    cin>>V>>E>>r;
    int head[100000],next[500000]={},to[500000]={},D2[500000]={};
    memset(head,-1,sizeof(head));
    for(int i=0;i<E;i++){
        int s,t,d;
        cin>>s>>t>>d;
        next[i]=head[s];
        head[s]=i;
        to[i]=t;
        D2[i]=d;
    }
    queue<int> Q;
    Q.push(r);
    D[r]=0;
    while(! Q.empty()){
        int x=Q.front();
        Q.pop();
        for(int i=head[x];i!=-1;i=next[i]){
            if(D[to[i]]>D[x]+D2[i]){
                D[to[i]]=D[x]+D2[i];
                Q.push(to[i]);
            }
        }
    }
    for(int i=0;i<V;i++){
        if(D[i]==1000000000) cout<<"INF"<<endl;
        else cout<<D[i]<<endl;
    }
}