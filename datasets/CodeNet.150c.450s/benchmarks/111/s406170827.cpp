#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <climits>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#define ALL(A)		(A).begin(),(A).end()
#define DUMP(A)    cout<<#A<<"="<<(A)<< endl
#define SIZE(A)    (int)((A).size())
using namespace std;
typedef long long ll;

int main(){
    int n;
    scanf("%d",&n);
    vector<int> ins(n);
    for(int i=0;i<n;i++){
        scanf("%d",&ins[i]);
    }
    vector<vector<ll> > dp(n-1,vector<ll>(21,0));
    if(ins[0]<=20) dp[0][ins[0]]=1;
    for(int i=1;i<n-1;i++){
        for(int j=0;j<=20;j++){
            if(j-ins[i]>=0) dp[i][j]+=dp[i-1][j-ins[i]];
            if(j+ins[i]<=20) dp[i][j]+=dp[i-1][j+ins[i]];
        }
    }
    if(ins[n-1]<=20) printf("%lld\n",dp[n-2][ins[n-1]]);
    else printf("0\n");
}