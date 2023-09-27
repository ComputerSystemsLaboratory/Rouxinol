#include <cmath>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <utility>
#include <iomanip>

#define int long long int
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef pair<int, int> P;

const int INF = 1e15;
const int MOD = 1e9+7;

int seconds(string t){
    int h = (t[0] - '0') * 10 + t[1] - '0';
    int m = (t[3] - '0') * 10 + t[4] - '0';
    int s = (t[6] - '0') * 10 + t[7] - '0';

    return h * 60 * 60 + m * 60 + s;
}

signed main(){
    while(true){
        int n;
        cin >> n;

        if(n == 0){
            break;
        }

        vector<int> time(90000);
        rep(i, n){
            string s, t;
            cin >> s >> t;
            int begin = seconds(s);
            int end = seconds(t);

            time[begin] += 1;
            time[end] -= 1;
        }

        rep(i, 90000 - 1){
            time[i+1] += time[i];
        }

        int ans = 0;
        rep(i, 90000){
            if(time[i] > ans){
                ans = time[i];
            }
        }
        cout << ans << endl;
    }

    return 0;
}

