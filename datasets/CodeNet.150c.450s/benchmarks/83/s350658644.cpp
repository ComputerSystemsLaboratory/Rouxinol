#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;


template <typename T>
std::ostream &operator<<(std::ostream &out, const std::vector<T> &v){
    if(!v.empty()) {
        out << '[';
        std::copy(v.begin(), v.end(), std::ostream_iterator<T>(out, ", "));
        out << "\b\b]";
    }
    return out;
}

template <typename T1, typename T2>
std::ostream &operator<<(std::ostream &out, const std::pair<T1, T2> &p) {
    out << "[" << p.first << ", " << p.second << "]";
    return out;
}
//---------

int dp[1010][1010]; //dp[??????][??????]
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N, W;
    cin >> N >> W;
    vector<int> v(N);
    vector<int> w(N);
    memset(dp, 0, sizeof(dp));

    rep(i, 0, N){
        cin >> v[i] >> w[i];
    }

    for(int i = N-1; i >= 0; i--){
        for(int j = 0; j <= W; j++){
            if(j < w[i]){
                dp[i][j] = dp[i+1][j];
            }else{
                dp[i][j] = max(dp[i+1][j], dp[i+1][j-w[i]] + v[i]);
            }
        }
    }
    cout << dp[0][W] << endl;


    

    
}