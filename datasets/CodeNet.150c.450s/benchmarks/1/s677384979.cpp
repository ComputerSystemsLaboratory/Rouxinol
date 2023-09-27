#include<iostream>
#include<vector>
#include<algorithm>
#include<cctype>
#include<utility>
#include<string>
#include<cmath>
#include<cstring>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 1000000000
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;

#define MAX_N 100001
int n;

int a[MAX_N+1];
int dp2[MAX_N+1];

/*
void solve1(){/*最終要素に対する最長の長さのdp

    int res = 0;
    for(int i =0;i <n;i++){
        dp1[i] = 1;
        for(int j = 0;j < i;j++){
            if(a[j]<a[i]){
                dp1[i] = max(dp1[i],dp1[j]+1);
            }
            res = max(res,dp1[i]);
        }
    }
    cout << res << endl;

}

*/


void solve2(){/*長さに対する最小の最終要素*/
    
    fill(dp2,dp2+n,INF);
    for(int i = 0;i < n;i++){
        *lower_bound(dp2,dp2+n,a[i]) = a[i];
    }
    cout << lower_bound(dp2,dp2+n,INF)-dp2 << endl;
    
    }
    

int main(){

    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }

    //solve1();
    solve2();

    return 0;
}
