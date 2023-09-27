#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
using ll = long long ;
using P = pair<int,int> ;
using pll = pair<long long,long long>;
constexpr int INF = 1e9;
constexpr long long LINF = 1e17;
constexpr int MOD = 1000000007;
constexpr double PI = 3.14159265358979323846;


struct Unionfind{
    vector<int> parents;
    int n;
    Unionfind(int n):n(n),parents(n,-1){ }

    int find(int x){
        if(parents[x] < 0) return x;
        else return parents[x] = find(parents[x]);
    }

    void unite(int x,int y){
        x = find(x);
        y = find(y);

        if(x==y) return;
        if(parents[x] > parents[y]) swap(x,y);
        parents[x] += parents[y];
        parents[y] = x;
    }  

   int size(int x){
       return -parents[find(x)];
   }

   bool same(int x,int y){
       return find(x) == find(y);
   }

   vector<int> members(int x){
       int root = find(x);
       vector<int> member;
       for(int i=0;i<n;i++){
           if(find(i)==root){
               member.push_back(i);
           }
       }
      return member;
  }

  int group_cnt(){
      int c = 0;
      rep(i,n){
          if(parents[i] < 0) ++c;
      }
      return c;
  }
};

struct edge{
    int from,to,cost;  
};

int main(){
    int n;
    cin >> n;
    vector<edge> eg;
    rep(i,n)rep(j,n){
        int a;
        cin >> a;
        if(i > j) continue;
        if(a==-1) continue;
        eg.push_back(edge{i,j,a});
    }

    sort(eg.begin(),eg.end(),[](const edge &l,const edge &r){
        return l.cost < r.cost;
    });

    Unionfind uf(n);
    int ans = 0;

    rep(i,eg.size()){
        if(uf.same(eg[i].from,eg[i].to)) continue;
        uf.unite(eg[i].from,eg[i].to);
        ans += eg[i].cost;
    }
    
    cout << ans << endl;
    return 0;
}
