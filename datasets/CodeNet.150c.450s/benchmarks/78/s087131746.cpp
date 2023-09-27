#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

#define INF 1000000

int dp[1000001];
int dp2[1000001];

int main(){
    int a[200];
    memset(dp, INF, sizeof(dp));
    memset(dp2, INF, sizeof(dp2));
    
    for(int i=1;i<200;i++){
        a[i] = i*(i+1)*(i+2)/6;
        if(a[i] > 1000000) break;
        dp[a[i]] = 1;
        if(a[i]%2) dp2[a[i]]=1;
    }

    for(int i=1;i<1000001;i++){
        for(int j=1;j<200;j++){
            if(i+a[j] > 1000000) break;
            dp[i+a[j]] = min(dp[i+a[j]], dp[i]+1);
            if(a[j]%2) dp2[i+a[j]] = min(dp2[i+a[j]], dp2[i]+1);
        }
    }
    int n;
    while(cin >> n && n){
        printf("%d %d\n", dp[n], dp2[n]);
    }
}