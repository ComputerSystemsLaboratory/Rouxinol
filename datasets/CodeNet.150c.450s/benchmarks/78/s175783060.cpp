#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <climits>
#include <cassert>
using namespace std;

#define REP(i,n) for(int i=0;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF INT_MAX/3
#define LINF LLONG_MAX/3
#define MP make_pair
#define PB push_back
#define EB emplace_back
#define ALL(v) (v).begin(),(v).end()
#define debug(x) cout<<#x<<":"<<x<<endl
#define debug2(x,y) cout<<#x","<<#y":"<<x<<","<<y<<endl

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;

vi num;
vi num_odd;
int N;
int N_odd;

void init(){
    int t=1;
    int i=1;
    while(t<1000000){
        num.EB(t);
        i++;
        t = i*(i+1)*(i+2)/6;
    }
    N = num.size();

    for(i=0;i<N;i++){
        if(num[i]%2==1) num_odd.emplace_back(num[i]);
    }
    N_odd = num_odd.size();
}

void solve(int n){
    vi dp(n+10,INF);
    dp[0]=0;
    for(int i=0;i<N;i++){
        for(int j=num[i];j<=n;j++){
            dp[j] = min(dp[j],dp[j-num[i]]+1);
        }
    }

    cout << dp[n] << " ";

    dp = vector<int>(n+10,INF);
    dp[0] = 0;
    for(int i=0;i<N_odd;i++){
        for(int j=num_odd[i];j<=n;j++){
            dp[j] = min(dp[j],dp[j-num_odd[i]]+1);
        }
    }
    cout << dp[n] << endl;
}

int main(){
    init();
    int n;


    while(cin>>n){
        if(n==0) break;
        solve(n);
    }
}