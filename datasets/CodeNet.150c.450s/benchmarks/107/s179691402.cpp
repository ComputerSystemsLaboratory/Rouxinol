#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i,n) for(i = 0;i < n;++i)
#define all(v) v.begin(), v.end()
using ll = long long;

int main()
{
    ll i,j;
    string s1,s2;
    cin >> s1 >> s2;
    ll n1 = s1.size(), n2 = s2.size();
    vector<vector<ll>> dp(n1+1, vector<ll>(n2+1));
    for(i = 0;i <= n1;++i){
        dp.at(i).at(0) = i;
    }
    for(i = 0;i <= n2;++i){
        dp.at(0).at(i) = i;
    }
    for(i = 1;i <= n1;++i){
        for(j = 1;j <= n2;++j){
            if(s1.at(i-1) == s2.at(j-1)){
                dp.at(i).at(j) = min({dp.at(i-1).at(j-1), dp.at(i-1).at(j) + 1, dp.at(i).at(j-1) + 1});
            }else{
                dp.at(i).at(j) = min({dp.at(i-1).at(j-1), dp.at(i-1).at(j), dp.at(i).at(j-1)}) + 1;
            }
        }
    }
    cout << dp.at(n1).at(n2) << endl;
    return 0;
}
