#include<iostream>
#include<vector>
#include<algorithm>
#include<cctype>
#include<utility>
#include<string>
#include<cmath>
#include<cstring>
#include<queue>
#include<map>
#include<climits>
#include<cstdio>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
using namespace std;
typedef pair<int, int> P;
typedef long long int ll;
typedef pair<ll,ll> LLP;
#define INF 1000000007
#define ARRAY_MAX 30
ll dx[4] = {1,0,0,-1};
ll dy[4] = {0,1,-1,0};

int n;
int dp[ARRAY_MAX][ARRAY_MAX];

void warshal_floyd(){
    REP(k,10){
        REP(i,10){
            REP(j,10){
                dp[i][j] = min(dp[i][j],dp[i][k] + dp[k][j]);
            }
        }
    }
}

int main(){

    while(cin >> n,n){
        int maxi_town_number = -1;
        REP(i,ARRAY_MAX){
            REP(j,ARRAY_MAX){
                dp[i][j] = INF;
                if(i == j){
                    dp[i][j] = 0;
                }
            }
        }
        REP(i,n){
            int a,b,c;
            cin >> a >> b >> c;
            maxi_town_number = max(maxi_town_number,max(a,b));
            dp[a][b] = c;
            dp[b][a] = c;
        }
        warshal_floyd();
        int mini_town = INF;
        int maxi = INF;

        REP(i,maxi_town_number+1){
            int sum = 0;
            //i番目の町に住んでいる
            REP(j,maxi_town_number+1){
                if(dp[i][j] != INF){
                    sum += dp[i][j];
                }
            }
            if(sum < maxi){
                maxi = sum;
                mini_town = i;
            }
        }   
        cout << mini_town << " " << maxi << endl;
    }



    return 0;
}
