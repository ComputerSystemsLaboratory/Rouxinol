#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
constexpr int di[] = { 0, 1, 0, -1 }, dj[] = { 1, 0, -1, 0 };
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define SORT(v) sort((v).begin(), (v).end())
#define SORTR(v) sort((v).rbegin(), (v).rend())
#define all(v) (v).begin(), (v).end()
#define MAX 100
#define vmax 10000
#define sentinel 2000000000
#define INF (1<<30)
constexpr long long int inf = 100000000000000000;
constexpr long long int rinf = -(INT64_MAX);
static const int NIL=-1;

//cout<<fixed<<setprecision(20);cin.tie(0);ios::sync_with_stdio(false);

struct edge{
    int from,to,cost;
};

vector<edge> es;
vector<ll> d;
int V,E;

bool bell(int s){
    d.resize(V);
    fill(d.begin(),d.end(),inf);
    d[s]=0;
    for(int i=0;i<V;i++){
        for(auto e:es){
            if(d[e.from]!=inf&&d[e.from]+e.cost<d[e.to]){
                if(i==V-1) return false;
                d[e.to]=d[e.from]+e.cost;
            }
        }
    }
    return  true;
}

int main() {
    int r,s,t,c;
    cin>>V>>E>>r;
    for(int i=0;i<E;i++){
        cin>>s>>t>>c;
        es.push_back({s,t,c});
    }

    if(bell(r)){
       for(int i=0;i<V;i++){
            if(d[i]==inf){
                cout<<"INF"<<endl;
            }else{
                cout<<d[i]<<endl;
            }
        }
    }else{
       cout<<"NEGATIVE CYCLE"<<endl;
   }

    return 0;
}




