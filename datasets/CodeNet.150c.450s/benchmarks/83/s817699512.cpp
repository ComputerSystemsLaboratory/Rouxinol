#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
typedef pair<int,int> product;

int main() {
    int n,w;
    cin >> n >> w;
    vector<product> products(n);    // <value,weight>
    for(int i=0;i<n;i++){
        cin >> products.at(i).first >> products.at(i).second;
    }

    vector<vector<int> > dp(n+1,vector<int>(w+1,0));
    for(int i=0;i<n;i++){
        for (int j=0;j<=w;j++){
            if (j < products[i].second){
                dp[i+1][j] = dp[i][j];
            }else{
                dp[i+1][j] = max(dp[i][j],dp[i][j-products[i].second] + products[i].first);
            }
        }
    }
    cout << dp[n][w] << endl;
}
