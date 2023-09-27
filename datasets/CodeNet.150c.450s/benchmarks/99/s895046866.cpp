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
#include <cstring>
#include <cmath>

#define rep(i, n) for(int i = 0; i < n; i ++)
#define ALL(T) T.begin(), T.end()
#define mp make_pair
#define pb push_back

using namespace std;

typedef pair<int, int> pii;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;

const int INF = 1 << 24;

string mcxi = "mcxi";

int main(void){
    int n; cin >> n;

    while(n --){

        int res = 0;
        
        rep(i, 2){
            string in; cin >> in;
            rep(j, 4){
                int diff = in.find(mcxi[j]);
                if(!~diff) continue;

                diff = in[diff - 1] - '0';
                if(diff < 0 || 9 < diff) diff = 1;
                res += diff * (int)pow(10., 3 - (double)j);
            }
        }
        string ans;

        rep(i, 4){
            int val = res % 10;
            res /= 10;

            if(val){
                ans.pb(mcxi.at(3 - i));
                if(val != 1) ans.pb(val + '0');
            }
        }
        reverse(ALL(ans));
        cout << ans << endl;
    }

    return 0;
}