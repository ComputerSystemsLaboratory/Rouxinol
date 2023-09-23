#include<iostream>
using namespace std;
int dp[40];
int main(){
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            for(int k=0;k<=9;k++){
                for(int l=0;l<=9;l++){
                    dp[i+j+k+l]++;
                }
            }
        }
    }
    int n;
    while(cin>>n){
        if(n==0){break;}
        cout<<dp[n]<<endl;
    }
    return 0;
}
