#include <iostream>
using namespace std;

int main(void){
    int n;
    while(cin >> n){
        if(n == 0)  break;
        int sum=0, dp[100001]={0};
        for(int i=1; i<=n; i++){
        sum = i;
        for(int j=1; sum<n; j++){
            sum += (i+j);
            dp[sum]+=1;
        }
    }
        cout << dp[n] <<endl;
    }
    return 0;
}

