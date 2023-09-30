#include <iostream>
#include <vector>


int main(){
    int n;
    std::cin >> n;
    //dp[i][j]???i+1????????§?¨???????????????????j(0???j???20)??§????????°
    std::vector<std::vector<long long int> > dp(n, std::vector<long long int>(21, 0));
    //??\????????°???????????¨
    std::vector<int> num(n, 0);
    //??°?????\???
    for(int i = 0; i < n; ++i){
        int x;
        std::cin >> x;
        num[i] = x;
    }
    //?????????
    dp[0][num[0]] = 1;
    for(int i = 1; i < n - 1; ++i){ //2?????????N-1????????§????¨????
        for(int j = 0; j < 21; ++j){
            //??????1??????????¨?????????????j?????´????????°???????????°????????????????±???????
            if(dp[i - 1][j] > 0){
                //???????????????0??\???20??\?????????
                if((j + num[i]) <= 20){
                    dp[i][j + num[i]] += dp[i - 1][j];
                }
                if((j - num[i]) >= 0){
                    dp[i][j - num[i]] += dp[i - 1][j];
                }
            }
        }
    }
    //??????????????????n - 1????????§?¨???????????????????num[n-1]??§????????°
    std::cout << dp[n - 2][num[n - 1]] << std::endl;
    return 0;
}