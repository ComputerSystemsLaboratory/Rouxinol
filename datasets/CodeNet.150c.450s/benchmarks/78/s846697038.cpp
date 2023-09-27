#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <deque>
#include <queue>
#include <tuple>
#include <queue>
#include <functional>
#include <cmath>
#include <iomanip>
#include <map>
#include <set>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <complex>
#include <iterator>
#include <array>
#include <memory>
#include <stack>
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long int
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define ld long double
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,s,n) for(int i=s;i<n;i++)
#define all(in) in.begin(), in.end()
template<class T, class S> void cmin(T &a, const S &b) { if (a > b)a = b; }
template<class T, class S> void cmax(T &a, const S &b) { if (a < b)a = b; }
#define MAX 1e6+10
using namespace std;
typedef pair<int, int> pii;
typedef pair<double,double>pdd;
typedef pair<ll,ll>pll;
using namespace std;
#define int ll

vector<int>precal;
vector<int>dp(MAX+10,MAX);
vector<bool>flag(MAX+10,false);
signed main(){
    int n;
    precal.push_back(0);
    dp[0]=0;
    for(int i=1;;i++){
        int cnt=((i)*(i+1)*(i+2))/6;
        if(cnt>MAX)break;
        precal.push_back(cnt);
        flag[cnt]=true;
    }
    for(int i=1; i<=MAX-9;i++){
        if(flag[i]){dp[i]=1; continue;}
        int index=(int)(upper_bound(precal.begin(),precal.end(),i)-precal.begin());
        for(int j=0; j<index;j++)
            dp[i]=min(dp[i],dp[precal[j]]+dp[i-precal[j]]);
    }
    vector<int>oddcal;
    vector<int>odp(MAX+10,MAX);
    vector<bool>oddflag(MAX+10,false);
    oddcal.push_back(0);
    odp[0]=0;
    for(int i=1;;i++){
        int cnt=(i*(i+1)*(i+2))/6;
        if(cnt>MAX)break;
        if(!(cnt%2))continue;
        oddcal.push_back(cnt);
        oddflag[cnt]=true;
    }
    for(int i=1; i<=MAX-9;i++){
        if(oddflag[i]){odp[i]=1;continue;}
        int index=(int)(upper_bound(oddcal.begin(), oddcal.end(), i)-oddcal.begin());
        for(int j=0;j<index;j++)
            odp[i]=min(odp[i],odp[oddcal[j]]+odp[i-oddcal[j]]);
        
    }
    while(cin>>n,n){
        cout<<dp[n]<<" "<<odp[n]<<endl;
    }
}