#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int N;
    cin>>N;
    int ans[151];
    if(N>20){
        for(int i=0;i<N;i++){
            string inp1,inp2;
            cin>>inp1;
            cin>>inp2;
            int dp[101][101]={};
            for(int j=1;j<=inp1.size();j++){
                for(int k=1;k<=inp2.size();k++){
                    if(inp1[j-1]==inp2[k-1]){
                        dp[j][k]=dp[j-1][k-1]+1;
                    }else{
                        dp[j][k]=max(dp[j-1][k],dp[j][k-1]);
                    }
                }
            }
            ans[i]=dp[inp1.size()][inp2.size()];
        }
    }else{
        for(int i=0;i<N;i++){
            string inp1,inp2;
            cin>>inp1;
            cin>>inp2;
            int dp[1001][1001]={};
            for(int j=1;j<=inp1.size();j++){
                for(int k=1;k<=inp2.size();k++){
                    if(inp1[j-1]==inp2[k-1]){
                        dp[j][k]=dp[j-1][k-1]+1;
                    }else{
                        dp[j][k]=max(dp[j-1][k],dp[j][k-1]);
                    }
                }
            }
            ans[i]=dp[inp1.size()][inp2.size()];
        }
    }
    for(int i=0;i<N;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}