#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main() {
    int query;
    cin >> query;
    for(int q=0;q<query;q++){
        string x,y;
        cin >> x >> y;
        vector<vector<int> > dp(x.length()+1,vector<int>(y.length()+1,0));
        for(int i=0;i<x.length();i++){
            for(int j=0;j<y.length();j++){
                if(x[i] == y[j]){
                    dp[i+1][j+1] = dp[i][j] +1;
                }else{
                    dp[i+1][j+1] = max(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
        cout << dp[x.length()][y.length()] << endl;
    }
}
