#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef pair<int, int> pii;
typedef long long ll;
typedef unsigned long long ull;
#define all(a)  (a).begin(),(a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pb push_back
#define mp make_pair
#define loop(i,a,b) for(ull i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)
#define iter(i,c) for(auto i=(c).begin(); i!=(c).end(); ++i)
#define riter(i,c) for(auto i=(c).rbegin(); i!=(c).rend(); ++i)
const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

class DisjoinSet {
    public:
        vector<int> rank, p;
        DisjoinSet(){}
        DisjoinSet(int size){
            rank.resize(size,0);
            p.resize(size,0);
            for (int i=0;i<size;i++) makeSet(i);
        }
        
        void makeSet(int x){
            p[x]=x;
            rank[x]=0;
        }
        
        bool same(int x,int y){
            return findSet(x) == findSet(y);
        }
        
        void unite(int x, int y){
            link(findSet(x), findSet(y));
        }
        
        void link(int x, int y){
            if (rank[x] > rank[y]){
                p[y]=x;
            }else{
                p[x]=y;
                if(rank[x]==rank[y]){
                    rank[y]++;
                }
            }
        }
        
        int findSet(int x){
            if(x!=p[x]){
                p[x]=findSet(p[x]);
            }
            return p[x];
        }
};

int main(){
    int n, a, b, q;
    int t;
    
    cin >> n >> q;
    DisjoinSet ds= DisjoinSet(n);
    
    rep(i,q){
        cin >> t >> a >> b;
        if(t==0) ds.unite(a,b);
        else if(t==1){
            if(ds.same(a,b)) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
    
    return 0;

}