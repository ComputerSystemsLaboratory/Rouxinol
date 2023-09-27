#include<algorithm>
template<class T>
int mcm(T first, T last) {
    const auto N = std::distance(first, last) - 1;
    int dp[N][N];
    std::fill(dp[0], dp[N], 1 << 28);
    for (int i = 0; i < N; ++i) dp[i][i] = 0;
    for (int L = 1; L < N; ++L)
        for (int i = 0; i < N - L; ++i) {
            int j = i + L;
            for (int k = i; k < j; ++k)
                dp[i][j] = std::min(dp[i][j], dp[i][k] + dp[k + 1][j] + first[i] * first[k + 1] * first[j + 1]);
        }
    return dp[0][N - 1];
}
#include<iostream>
#include<vector>
using namespace std;
int main() {    
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int> vec(n+1);
    for(int i=0;i<n;++i) cin>>vec[i]>>vec[i+1];
    cout<<mcm(vec.begin(),vec.end())<<endl;
}