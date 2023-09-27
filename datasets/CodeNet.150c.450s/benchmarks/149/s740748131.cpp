#include<bits/stdc++.h>
#define REP(i,n) for(long long i=0;i<n;++i)
#define FOR(i,a,b) for(long long i=a;i<b;++i)
using namespace std;

class Unionfind{
    public:
        vector< int > trank,p;

        Unionfind(int size){
            trank.resize(size,0);
            p.resize(size,0);
            REP(x,size) p[x]=x;
        }
        int find(int x){
            if(x==p[x]) return x;
            return p[x]=find(p[x]);
        }
        bool same(int x,int y){
            return find(x)==find(y);
        }
        void unite(int x,int y){
            x=find(x);
            y=find(y);
            if(trank[x]>trank[y]) p[y]=x;
            else {
                p[x]=y;
                if(trank[x]==trank[y]) trank[y]++;
            }
        }
};

int main(){
    int n,q;
    scanf("%d%d",&n,&q);
    Unionfind data(n);
    int com,x,y;
    REP(i,q){
        scanf("%d%d%d",&com,&x,&y);
        if(com) printf("%d\n",data.same(x,y));
        else data.unite(x,y);
    }
    return 0;
}


