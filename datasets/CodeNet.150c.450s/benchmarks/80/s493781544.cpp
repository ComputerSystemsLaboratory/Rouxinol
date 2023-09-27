#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>

#define rep(i, n) for(int i = 0; i < n; i ++)
#define ALL(T) T.begin(), T.end()

using namespace std;

typedef pair<int, int> pii;
typedef unsigned long long ull;

const int S_N = 4;
const int P_N = 2;

int main(){
    int res = 0;
    rep(i, P_N){
        int sum = 0;
        rep(j, S_N){
            int score; cin >> score;
            sum += score;
            res = max(res, sum);
        }
    }
    cout << res << endl;

    return 0;
}