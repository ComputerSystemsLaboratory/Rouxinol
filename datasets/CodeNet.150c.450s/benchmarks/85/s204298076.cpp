#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(int n, vector<int> & dims){
    int dp[100][101] = {{0}};
    for (int span = 2; span != n + 1; ++span){
        for (int first = 0; first + span != n + 1; ++first){
            for (int last = first + span; last != n + 1; ++last){
                int record = 2000000000;
                for (int mid = first + 1; mid != last; ++mid){
                    record = min(record, dp[first][mid] + dp[mid][last] + dims[first] * dims[last] * dims[mid]);
                }
                dp[first][last] = record;
            }
        }
    }
    return dp[0][n];
}


int main()
{
    int n = 0;
    cin >> n;
    vector<int> dims(n + 1);
    int r = 0;
    int c = 0;
    for (int i = 0; i != n; ++i){
        cin >> r >> c;
        dims[i] = r;
    }
    dims[n] = c;
    cout << solve(n, dims) << endl;
    return 0;
}