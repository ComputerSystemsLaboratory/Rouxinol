#include <iostream>
#include <vector>
using namespace std;

class DisjointSet{
public:
    vector<int> p,r;

    DisjointSet(int s){
        p.resize(s,0);
        r.resize(s,0);
        int i;
        for(i=0;i<s;i++){makeset(i);}
    }

    void makeset(int i){
        p[i]=i;
        r[i]=0;
    }

    bool same(int a,int b){
        if(findset(a)==findset(b))return true;
        else return false;
    }

    void link(int a,int b){
        int pa=findset(a);
        int pb=findset(b);
        if(r[pa]>r[pb])p[pb]=pa;
        else{
            p[pa]=pb;
            if(r[pa]==r[pb])r[pb]+=1;
        }
    }

    int findset(int a){
        if(a!=p[a]){
            p[a]=findset(p[a]);
        }
        return p[a];
    }
};

int main()
{
    int n,q,t,a,b;
    cin>>n>>q;
    DisjointSet ds=DisjointSet(n);
    int i;
    for(i=0;i<q;i++){
        cin>>t>>a>>b;
        if(t==0)ds.link(a,b);
        if(t==1){
            if(ds.same(a,b))cout<<1<<endl;
            else cout<<0<<endl;
        }
    }
    return 0;
}