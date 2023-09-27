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

int dp[50010];

int main(){
    
    int n,m;
    cin>>n>>m;
    vector<int> a(m);
    REP(i,m)cin>>a[i];
    
    for(int i=1;i<=50005;i++)dp[i]=100000000;
    for(int j=0;j<m;j++){
        for(int i=1;i<=50005;i++){
            if(i-a[j]>=0)dp[i]=min(dp[i-a[j]]+1,dp[i]);
        }
    }
    
    cout<<dp[n]<<endl;
    
    return 0;
}