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
#define rep(i, n) for(int i=0;i<n;++i)
#define rrep(i, n) for(int i=n;i>=0;--i)
const int inf=1e9+7;
const ll mod=1e9+7;
const ll big=1e18;
const double PI=2*asin(1);

int main() {
    string S, T;
    cin>>S>>T;
    int DP[S.size()+1][T.size()+1];
    for(int i=0;i<=S.size();++i){
        for(int j=0;j<=T.size();++j){
            DP[i][j] = 0;
        }
    }
    DP[1][0] = 1;
    DP[0][1] = 1;
    for(int i=2;i<=S.size();++i){
        DP[i][0] = DP[i-1][0]+1;
    }
    for(int i=2;i<=T.size();++i){
        DP[0][i] += DP[0][i-1]+1;
    }
    for(int i=1;i<=S.size();++i){
        for(int j=1;j<=T.size();++j){
            if(S[i-1]==T[j-1]){
                DP[i][j] = min(DP[i-1][j-1], min(DP[i-1][j]+1, DP[i][j-1]+1));
            }
            else{
                DP[i][j] = min(DP[i-1][j-1]+1, min(DP[i-1][j]+1, DP[i][j-1]+1));
            }
        }
    }
    cout<<DP[S.size()][T.size()]<<endl;
}


