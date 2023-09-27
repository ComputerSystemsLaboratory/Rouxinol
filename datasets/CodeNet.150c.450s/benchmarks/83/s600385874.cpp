#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>

#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
#define var auto
#define mod 1000000007
typedef long long ll;

using namespace std;

int inputValue(){
    int a;
    cin >> a;
    return a;
}

template <typename T>
void output(T a, int precision) {
    if(precision > 0){
        cout << fixed << setprecision(precision)  << a << "\n";
    }
    else{
        cout << a << "\n";
    }
}

// end of template

int main() {
    // source code
    
    int N = inputValue();
    int M = inputValue(); // weight
    
    vector<int> C(N);
    vector<int> W(N);
    
    rep(i, N){
        C[i] = inputValue();
        W[i] = inputValue();
    }
    
    vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));
    
    repd(i, 1, N + 1){
        repd(j, 1, M + 1){
            if (j - W[i - 1] >= 0) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - W[i - 1]] + C[i - 1]);
            }
            else{
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    
    output(dp[N][M], 0);
    
    return 0;
}