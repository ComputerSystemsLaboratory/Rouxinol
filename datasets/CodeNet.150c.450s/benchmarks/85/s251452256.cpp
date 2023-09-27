#include <iostream>
#include <vector>
using namespace std;
const int INF = 1001001001;

int main(){
    int n;
    cin >> n;
    vector<int> rnum(n+1);
    for(int i = 0; i < n; i++){
        cin >> rnum[i] >> rnum[i+1];
    }

    vector<vector<int>> memo(n, vector<int>(n, INF));
    for(int i = 0; i < n; i++) memo[i][i] = 0;

    for(int i = n-1; i >= 0; i--){
        for(int j = i; j < n; j++){
            for(int k = i; k+1 < n; k++){
                if(memo[i][j] > memo[i][k] + memo[k+1][j] + rnum[i]*rnum[k+1]*rnum[j+1]){
                    memo[i][j] = memo[i][k] + memo[k+1][j] + rnum[i]*rnum[k+1]*rnum[j+1];
                }
            }
        }
    }

    cout << memo[0][n-1] << endl;
    return 0;
}
