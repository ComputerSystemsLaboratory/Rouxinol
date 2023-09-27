class _in{struct my_iterator{int it;const bool rev;explicit constexpr my_iterator(int it_, bool rev=false):it(it_),rev(rev){}constexpr int operator*(){return it;}constexpr bool operator!=(my_iterator& r){return it!=r.it;}void operator++(){rev?--it:++it;}};const my_iterator i,n;public:explicit constexpr _in(int n):i(0),n(n){}explicit constexpr _in(int i,int n):i(i,n<i),n(n){}constexpr const my_iterator& begin(){return i;}constexpr const my_iterator& end(){return n;}};

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int N = s1.size(), M = s2.size();
    vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));
    for(int i : _in(N + 1)) dp[i][0] = i;
    for(int j : _in(M + 1)) dp[0][j] = j;
    for(int i : _in(N)) for(int j : _in(M)) {
        dp[i + 1][j + 1] = dp[i][j];
        if(s1[i] != s2[j]) ++dp[i + 1][j + 1];
        int temp = min(dp[i][j + 1] + 1, dp[i + 1][j] + 1);
        dp[i + 1][j + 1] = min(dp[i + 1][j + 1], temp);
    }
    cout << dp[N][M] << endl;
}