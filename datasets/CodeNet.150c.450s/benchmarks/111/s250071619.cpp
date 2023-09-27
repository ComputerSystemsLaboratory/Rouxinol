#include <iostream>
#include <string.h>
using namespace std;
int n;
int a[101];
long long memo[101][21];

long long res(int i,int sum){
    if(sum<0||sum>20) return 0;
    if(memo[i][sum]!=0) return memo[i][sum];
    if(i==n-1) return memo[i][sum]=(sum==a[n-1]);
    return memo[i][sum]=res(i+1,sum+a[i])+res(i+1,sum-a[i]);
}

int main(){
    cin >> n;   
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    memset(memo,0,sizeof(memo));
    cout << res(1,a[0]) << endl;
    return 0;
}