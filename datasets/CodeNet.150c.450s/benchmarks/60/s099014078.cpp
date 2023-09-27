#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <stack>
#include <functional>
#include <queue>
#include <cmath>
#include <set>
#include <map>
#include <numeric>

#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define Sort(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define vi vector<int>
#define INF (int)1e9
#define INFL 1e18
#define MOD 1000000007
#define pb push_back
#define MP make_pair
typedef long long int ll;
typedef std::pair<int,int> P;
int D=1;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

using namespace std;

int main(){
    int n; cin>>n;
    vector<vector<int>> v(n,vector<int>(n,0));
    rep(i,0,n){
        int u,k;
        cin>>u>>k;
        rep(j,0,k){
            int x;
            cin>>x;
            v[u-1][x-1]=1;
        }
    }
    
    rep(i,0,n){
        rep(j,0,n){
            if(j)cout<<" ";
            cout<<v[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}

