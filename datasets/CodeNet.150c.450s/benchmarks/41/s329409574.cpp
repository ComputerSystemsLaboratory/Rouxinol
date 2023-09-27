#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<list>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<stack>
using namespace std;
typedef long long ll;
#define fi first
#define se second
#define mp make_pair
const int inf=1e9+7;
const ll mod=1e9+7;
const ll big=1e18;

int main() {
    int V, E;
    cin>>V>>E;
    ll D[V][V];
    for(int i=0;i<V;++i){
        for(int j=0;j<V;++j){
            if(i!=j) D[i][j] = big;
            else D[i][j] = 0;
        }
    }
    int s, t;
    ll d;
    for(int i=0;i<E;++i){
        cin>>s>>t>>d;
        D[s][t] = d;
    }
    bool negative = false;
    for(int k=0;k<V;++k){
        for(int i=0;i<V;++i){
            for(int j=0;j<V;++j){
                if((D[i][k]==big) | (D[k][j]==big)) continue;
                D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
                if(i==j){
                    if(D[i][j]<0) negative = true;
                }
            }
        }
    }
    if(negative) cout<<"NEGATIVE CYCLE"<<endl;
    else{
        for(int i=0;i<V;++i){
            for(int j=0;j<V;++j){
                if(D[i][j]==big) cout<<"INF";
                else cout<<D[i][j];
                if(j<V-1)cout<<' ';
            }
            cout<<endl;
        }
    }
}


