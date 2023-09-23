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
    for(;;){
        scanf("%d",&n);
        if(n==0) break;
        vector<int> dp(n);
        dp[0]=1;
        dp[1]=2;
        dp[2]=4;
        for(int i=3;i<n;i++){
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        printf("%d\n",dp[n-1]%3650==0?dp[n-1]/3650:dp[n-1]/3650+1);
    }
}