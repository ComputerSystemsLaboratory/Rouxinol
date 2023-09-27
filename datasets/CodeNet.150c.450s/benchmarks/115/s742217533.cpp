#include <iostream>
#include <string>

int max(int a, int b, int c);

int main(){
    int n;
    std::cin >> n;
    std::string str1;
    std::string str2;
    for(int i=0;i<n;i++){
        std::cin >> str1;
        std::cin >> str2;
        int size1 = str1.size();
        int size2 = str2.size();
        int dp[size1+1][size2+1];
        dp[0][0] = 0;
        for(int j=0;j<=size1;j++){
            dp[j][0] = 0;
        }
        for(int j=0;j<=size2;j++){
            dp[0][j] = 0;
        }

        for(int j=0;j<size1;j++){
            for(int k=0;k<size2;k++){
                if(str1[j]==str2[k]){
                    dp[j+1][k+1] = max(dp[j][k+1],dp[j][k] + 1,dp[j+1][k]);
                }else{
                    dp[j+1][k+1] = max(dp[j][k+1],dp[j][k],dp[j+1][k]);
                }
            }
        }

        std::cout << dp[size1][size2] << std::endl;
    }
    return 0;
}

int max(int a, int b, int c){
    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
    }else{
        if(b>c){
            return b;
        }else{
            return c;
        }
    }
}
