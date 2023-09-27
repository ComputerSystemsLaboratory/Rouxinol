#include <bits/stdc++.h>
using namespace std;

#define rep(i,x,y) for(int i=(x);i<(y);++i)
#define debug(x) #x << "=" << (x)

#ifdef DEBUG
#define _GLIBCXX_DEBUG
#define print(x) std::cerr << debug(x) << " (L:" << __LINE__ << ")" << std::endl
#else
#define print(x)
#endif

const int inf=1e9;
const int64_t inf64=1e18;
const double eps=1e-9;

template <typename T> ostream &operator<<(ostream &os, const vector<T> &vec){
    os << "[";
    for (const auto &v : vec) {
    	os << v << ",";
    }
    os << "]";
    return os;
}

int levenshtein_distance(const std::string &s,const std::string &t){
    std::vector<std::vector<int>> dp(s.size()+1,vector<int>(t.size()+1,s.size()+t.size()));
    for(int i=0; i<s.size(); ++i) dp[i][0]=i;
    for(int i=0; i<t.size(); ++i) dp[0][i]=i;
    for(int i=1; i<=s.size(); ++i){
        for(int j=1; j<=t.size(); ++j){
            int cost=s[i-1]==t[j-1]?0:1;
            dp[i][j]=min(dp[i-1][j-1]+cost,min(dp[i-1][j],dp[i][j-1])+1);
        }
    }
    return dp[s.size()][t.size()];
}

void solve(){
    string s1,s2;
    cin >> s1 >> s2;
    cout << levenshtein_distance(s1,s2) << endl;
}

int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);
    cout.setf(ios::fixed);
    cout.precision(10);
    solve();
    return 0;
}