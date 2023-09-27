#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define MAXN 100

struct Matrix {int r, c; };

int main(){
    int n; cin >> n;
    struct Matrix M[MAXN];
    for(int i=0; i<n; ++i){
        cin >> M[i].r >> M[i].c;
    }
    
    int dp[MAXN+1][MAXN];
    for(int i=0; i<n; ++i){
        dp[1][i] = 0;
    }
    for(int m=2; m<=n; ++m){
        for(int i=0; i<=n-m; ++i){
            priority_queue<int, vector<int>, greater<int> > pq;
            for(int j=1; j<m; ++j){
                //cout << "here with m= " << m << " i = " << i << " j = " << j << endl;
                int x = dp[j][i] + dp[m-j][i+j] + M[i].r*M[i+j].r*M[m+i-1].c;
                pq.push(x);
            }
            dp[m][i] = pq.top();
        }
    }
    cout << dp[n][0] << endl;
}