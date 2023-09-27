#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FOR(i, s, n) for(int i = s; i < (int)n; ++i)
#define per(i, n) for(int i = n; i >= 0; i--)
#define ROF(i, s, n) for(int i = s; i >= (int)n; i--)
static const double EPS = 1e-10;
static const int mod = 1000000007;
static const int INF = 1<<25;
static const int dx[] = { -1, 0, 1, 0, 1, -1, 1, -1 };
static const int dy[] = { 0, -1, 0, 1, 1, 1, -1, -1 };

int n,m;
int mem[50050];
int ans=INF;
int coin[25];
int dfs(int sum){
    if(sum==0)return 0;
    if(mem[sum]!=0)return mem[sum];
    int ans=INF;
    for(int i=0;i<m;i++){
        if(sum-coin[i]>=0&&coin[i]>0){
           int temp=dfs(sum-coin[i]);
               if(ans>temp){
                ans=temp;
            }
        }
    }
    return mem[sum]=ans+1;
}


signed main(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>coin[i];
    }
    cout<<dfs(n)<<endl;
}