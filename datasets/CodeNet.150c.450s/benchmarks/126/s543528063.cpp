#include<iostream>

using namespace std;

int main(){

    while(1){
    int a, b;
    cin>> a>> b;
    if(a==0&&b==0) break;
    int n;
    cin>> n;
    int x[n], y[n];
    for(int i=0; i<n; i++){
        cin>> x[i]>> y[i];
    }

    int dp[b+1][a+1];
    fill(dp[0], dp[b+1], 0);

    dp[b-1][1]=1;
    for(int i=b-1; i>=0; i--){
        for(int j=1; j<a+1; j++){
            if(i==b-1&&j==1) continue;
            bool f=false;
            for(int k=0; k<n ;k++){
                if(i==b-y[k]&&j==x[k]){
                    f=true;
                    break;
                }
            }
            if(f) continue;
            dp[i][j]=dp[i+1][j]+dp[i][j-1];
        }
    }

    cout<< dp[0][a]<< endl;

    }

    return 0;
}