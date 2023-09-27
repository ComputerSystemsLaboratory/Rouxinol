
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<math.h>
#include<string>
#include<string.h>
#include<stack>
#include<queue>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<stdlib.h>
#include<iomanip>

using namespace std;

#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 1e9
#define MOD 1000000007
#define rep(i,n) for(i=0;i<(n);i++)
#define loop(i,a,n) for(i=a;i<(n);i++)
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;

#define max_n 1000000

int main(void) {
    int i,j;

    vi tetra;
    i = 1;
    while(1){
        int t = i * (i+1) * (i+2) / 6;
        if(t > max_n) break;
        tetra.push_back(t);
        i++;
    }

    int dp[max_n][2];

    rep(i,max_n)
        dp[i][0] = dp[i][1] = i;

    rep(i,tetra.size()) rep(j,max_n - tetra[i]){
        dp[j+tetra[i]][0] = min(dp[j+tetra[i]][0], dp[j][0] + 1);
        if(tetra[i] % 2)
            dp[j+tetra[i]][1] = min(dp[j+tetra[i]][1], dp[j][1] + 1);
    }

    int n;
    while(cin >> n, n){
            cout << dp[n][0] << " " << dp[n][1] << endl;
    }
}

