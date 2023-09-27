#include<bits/stdc++.h>
using namespace std;
long long int dp[111][31] = {0};
int main(){
    int inp;
    scanf("%d",&inp);
    vector<int>num;
    num.push_back(0);
    int res;
    for(int i = 0;i < inp-1;i++){
        int n;
        cin >> n;
        num.push_back(n);
    }
    cin >> res;
    for(int i = 1;i < inp;i++){
        for(int j = 0;j <= 20;j++){
            if(i == 1 && j == num[i]){
                dp[i][j]++;
            }
            else{
                if(j-num[i] >= 0){
                    dp[i][j] += dp[i-1][j-num[i]];
                }
                if(j+num[i] <= 20){
                    dp[i][j] += dp[i-1][j+num[i]];
                }
            }

        }
    }
    /*for(int i = 1;i < inp;i++){
        for(int j = 0;j <= 20;j++){
            cout << dp[inp-i][j] << ' ';
        }
        cout << endl;
    }*/
    cout << dp[inp-1][res] << endl;
    //cout << num[inp] << ':' << res << endl;

    return 0;
}