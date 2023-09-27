#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <stack>
#include <queue>
#include <math.h>
using namespace std; 

int n,a[100001],dp[100001];


int main(void){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        dp[i]=1000000001;
    }
    for(int i=0;i<n;i++){
        int j;
        j=lower_bound(dp,dp+n,a[i])-dp;
        dp[j]=a[i];
    }
    for(int i=0;i<n;i++){
        if(dp[i]==1000000001){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<n<<endl;
    return 0;
}