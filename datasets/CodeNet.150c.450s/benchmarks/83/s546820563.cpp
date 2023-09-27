#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <set>
#include <cstdio>
#include <iomanip>

using namespace std;

#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define RREP(i,n) for(int (i)=(int)(n)-1;(i)>=0;(i)--)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
#define PB_VEC(Itr1,Itr2) (Itr1).insert((Itr1).end(),(Itr2).begin(),(Itr2).end())
#define UNIQUE(Itr) sort((Itr).begin(),(Itr).end()); (Itr).erase(unique((Itr).begin(),(Itr).end()),(Itr).end())

typedef long long ll;

int N,W;
int dp[101][10010];

int main(){
    
    cin>>N>>W;
    vector<int> v(N);
    vector<int> w(N);
    REP(i,N)cin>>v[i]>>w[i];
    
    for(int i=N-1;i>=0;i--){
        for(int j=0;j<=W;j++){
            if(j-w[i]<0)dp[i][j]=max(dp[i+1][j],dp[i+1][j]);
            else dp[i][j]=max(dp[i+1][j],dp[i+1][j-w[i]]+v[i]);
        }
    }
    
    int ans=0;
    REP(i,W+1)ans=max(ans,dp[0][i]);
    cout<<ans<<endl;
    
    return 0;
}