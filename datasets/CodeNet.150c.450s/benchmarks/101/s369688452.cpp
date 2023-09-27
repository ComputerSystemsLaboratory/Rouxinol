#include <bits/stdc++.h>
using namespace std;

const int MAX=100005;
vector<int> S[MAX];

int par[MAX];
int root(int a){
    if(par[a]==a) return a;
    else return par[a]=root(par[a]);
}
void unite(int a,int b){
    if(root(a)!=root(b)) par[root(b)]=root(a);
}
bool check(int a,int b){
    return root(a)==root(b);
}

int main(){

    int N,M;cin>>N>>M;
    for(int i=0;i<N;i++){
        par[i]=i;
    }
    for(int i=0;i<M;i++){
        int a,b;cin>>a>>b;
        unite(a,b);
    }
    int Q;cin>>Q;
    for(int i=0;i<Q;i++){
        int a,b;cin>>a>>b;
        if(check(a,b)) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }

}

