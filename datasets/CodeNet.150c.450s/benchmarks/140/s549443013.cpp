// GRL_2_A
#include <bits/stdc++.h>
#define endl "\n"
#define rep(i,n) for(int i=0;i<int(n);i++)
#define e_b emplace_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> ipair;
typedef pair<ll,ll> lpair;
template <class T>ostream &operator<<(ostream &o,const vector<T>&v) //vectorの中身を見る
{o<<"{";for(int i=0;i<(int)v.size();i++)o<<(i>0?", ":"")<<v[i];o<<"}";return o;}
void map_p(map<int,int>& d){cout<<"map: ";for(auto a : d){cout<<"{"<<a.first<<":"<<a.second<<"}";}cout<<endl;} //mapの中身を見る
void set_p(set<int>& d){cout<<"set: ";for(int a : d){cout<<a<<" ";}cout<<endl;} //setの中身を見る

struct edge{int u,v,cost;};
bool comp(edge a,edge b){
    return a.cost<b.cost;
}
struct unionfind{
    vector<int> par;
    void init(int n){
        par.assign(n,-1);
    }
    int find(int x){
        if(par[x]<=-1) return x;
        par[x]=find(par[x]);
        return par[x];
    }
    int size(int x){
        return -1*par[find(x)];
    }
    void unite(int x,int y){
        x=find(x),y=find(y);
        if(x==y) return;
        if(size(x)<size(y)) swap(x,y);
        par[x]+=par[y];
        par[y]=x;
    }
    bool same_set(int x,int y){
        return find(x)==find(y);
    }
};
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(12);

    int v,e;
    cin>>v>>e;
    vector<edge> hen(e);
    rep(i,e){
        int s,t,w;
        cin>>s>>t>>w;
        edge aa;
        aa.u=s,aa.v=t,aa.cost=w;
        hen[i]=aa;
    }
    sort(all(hen),comp); //辺のコストが小さい順にソート
    unionfind uf;
    uf.init(v);
    int total=0;
    rep(i,e){
        edge cur=hen[i];
        if(!uf.same_set(cur.u,cur.v)){
            uf.unite(cur.u,cur.v);
            total+=cur.cost;
        }
    }
    cout<<total<<endl;
    return 0;
}
