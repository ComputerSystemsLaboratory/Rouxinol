#include <iostream>
#include <bitset>
#include <fstream>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <functional>
#include <cctype>
#include <list>
#include <limits>
#include <unordered_map>
#define Debug 0
//#include <boost/multiprecision/cpp_int.hpp>

const double EPS = (1e-10);


using namespace std;
using Int = long long;
//using namespace boost::multiprecision;

const Int MOD = 998244353;

Int mod_pow(Int x, Int n) {
    Int res = 1;
    while(n > 0) {
        if(n & 1) res = (res * x) % MOD; //ビット演算(最下位ビットが1のとき)
        x = (x * x) % MOD;
        n >>= 1; //右シフト(n = n >> 1)
    }
    return res;
}

//最大公約数
template<typename T>
T gcd(T a, T b) {
    return b != 0 ? gcd(b, a % b) : a;
}

//最小公倍数
template<typename T>
T lcm(T a, T b) {
    return a * b / gcd(a, b);
}

//入出力高速化(非同期化)
void fast_input() {
    cin.tie(0);
    ios::sync_with_stdio(false);
}

int solve(int n, int a, int b, int c, int x) {
    vector<int> y(n);
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }
    int ret = -1;
    for (int i = 0, j = 0; i < n && j < 10001; j++) {
        if (x == y[i]) i++;
        x = (a*x+b)%c;
        if (i == n) ret = j; 
    }
    return ret;
}

int solve(int N) {
    int ret = 0;
    vector<string> vs(N);
    for (int i = 0; i < N; i++) {
        cin >> vs[i];
    }
    bool down = true;
    int left = 0;
    int right = 0;
    vector<string> steps = {"lu", "ld", "ru", "rd"};
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 4; j++) {
            if (steps[j] == vs[i]) {
                if (j == 0) {
                    left = 1;
                } else if (j == 1) {
                    left = 0;
                } else if (j == 2) {
                    right = 1;
                } else {
                    right = 0;
                }
            }
        }
        if (down) {
            if (right + left == 2) {
                down = false;
                ret++;
            }
        } else {
            if (right + left == 0) {
                down = true;
                ret++;
            }
        }
    }
    return ret;
}

int main(){
    int N;
    vector<int> ans;
    while (1) {
        cin >> N;
        if (!N) break;
        ans.push_back(solve(N));
    }
    for (auto &i: ans) {
        cout << i << endl;
    }

    return 0;
}



