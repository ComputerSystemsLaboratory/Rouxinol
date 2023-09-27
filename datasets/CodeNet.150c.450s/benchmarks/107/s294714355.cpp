#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string s1,s2;
    int l1,l2;
    cin >> s1 >> s2;
    l1=s1.size(), l2=s2.size();
    vector<vector<int>> dp(l1+1, vector<int>(l2+1));
    rep(i,l1)
        dp.at(i+1).at(0) = i+1;
    rep(i,l2)
        dp.at(0).at(i+1) = i+1;
    
    rep(i,l1)
        rep(j,l2) {
            dp.at(i+1).at(j+1) = min(dp.at(i).at(j+1)+1, dp.at(i+1).at(j)+1);
            if(s1.at(i) == s2.at(j))
                dp.at(i+1).at(j+1) = min(dp.at(i+1).at(j+1), dp.at(i).at(j));
            else
                dp.at(i+1).at(j+1) = min(dp.at(i+1).at(j+1), dp.at(i).at(j)+1);
        }

    cout << dp.at(l1).at(l2) << endl;    
}
