#include <iostream>
#include <string>

int min(int a, int b, int c);

int main(){
    std::string str1;
    std::string str2;
    std::cin >> str1;
    std::cin >> str2;
    int size1 = str1.size();
    int size2 = str2.size();
    int dp[size1+1][size2+1];
    dp[0][0] = 0;
    for(int j=0;j<=size1;j++){
        dp[j][0] = j;
    }
    for(int j=0;j<=size2;j++){
        dp[0][j] = j;
    }

    for(int j=1;j<=size1;j++){
        for(int k=1;k<=size2;k++){
            if(str1[j-1]==str2[k-1]){
                dp[j][k] = min(dp[j-1][k-1], dp[j-1][k] + 1, dp[j][k-1] + 1);
            }else{
                dp[j][k] = min(dp[j-1][k] + 1,dp[j-1][k-1] + 1, dp[j][k-1] + 1);
            }
        }
    }

    std::cout << dp[size1][size2] << std::endl;
    return 0;
}

int min(int a, int b, int c){
    if(a>b){
        return b>c ? c : b;
    }else{
        return a>c ? c : a;
    }
}
