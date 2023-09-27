#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include<numeric>
#include<cmath>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
    //cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	//cout << fixed << setprecision(15);N;
    int N; cin >> N;
    int r[N], c[N];
    REP(i,N){
        cin >> r[i] >> c[i];
    }

    /*if(N == 2){
        cout << r[0] * c[0] * c[1] << endl;
        return 0;
    }*/

    int dp[N][N];
    REP(i,N){
        REP(j,N){
            //dp[i][j] = INF;
            if(i == j) {dp[i][j] = 0;}
            else dp[i][j] = INF;
        }
    }
    //cout << dp[3][4] << endl;

    for(int w = 1; w < N; w++){
        for(int left = 0; left + w < N; left++){
            int right = left + w;
            //int mini = INF;
            for (int k = left;k < right; k++){
                int num = r[left] * r[k+1] * c[right];
                /*if(left == 3 && right == 4) {
                    cout << num << endl;
                    //cout << r[left] << " " << r[k+1] << " " << c[right] << endl;
                } */
                dp[left][left+w] = min(dp[left][left+w], dp[left][k] + dp[k+1][right] + num);
            }
        }   
    }

    cout << dp[0][N-1] << endl;
    
}
