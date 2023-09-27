#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <queue>
#include <deque>
#include <stack>
#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <numeric>
#include <functional>
#include <cctype>
#include <list>
#include <limits>
#include <cassert>
//#include <boost/multiprecision/cpp_int.hpp>

const double EPS = (1e-10);


using namespace std;
using Int = long long;
//using namespace boost::multiprecision;

const Int MOD = 1000000007;

void fast_input() {
    cin.tie(0);
    ios::sync_with_stdio(false);
}

vector<int> ans;

void solve(int N, int M) {
    int r; cin >> r;
    vector<vector<int>> imos(M+1, vector<int>(1261));
    for (int i = 0; i < r; i++) {
        int t, n, m, s; cin >> t >> n >> m >> s;
        if (s) imos[m][t]++;
        else imos[m][t]--; 
    }
    for (int i = 1; i <= M; i++) {
        for (int j = 1; j < 1261; j++) {
            imos[i][j] += imos[i][j-1];
        }
    }
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int s, e, m; cin >> s >> e >> m;
        int cnt = 0;
        for (int j = s; j < e; j++) {
            if (imos[m][j]) cnt++;
        }
        ans.push_back(cnt);
    }
}

int solve(int N) {
    int ret = 0;
    vector<vector<int>> field(N, vector<int>(6));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> field[i][j];
        }
        field[i][5] = 0;
    }

    int flag;
    do {
        flag = 0; 
        for (int i = N-1; i >= 0; i--) {
            int cnt = 1;
            for (int j = 1; j < 6; j++) {
                if (field[i][j] != 0 && field[i][j] == field[i][j-1]) {
                    cnt++;
                } else {
                    if (cnt >= 3) {
                        flag = 1;
                        ret += cnt * field[i][j-1];
                        for (int k = j-cnt; k < j; k++) {
                            field[i][k] = 0;
                        }
                    }
                    cnt = 1;
                }
            }
        }
        for (int k = 0; k < 10; k++) {
            for (int i = N-1; i >= 1; i--) {
                for (int j = 0; j < 5; j++) {
                    if (field[i][j] == 0) {
                        field[i][j] = field[i-1][j];
                        field[i-1][j] = 0;
                    }
                }
            }
        }
    } while (flag);
    return ret;
}

int main(void) {
    int N;
    vector<int> ans;
    while (1) {
        cin >> N;
        if (!N) break;
        ans.push_back(solve(N));
    }
    for (auto &i : ans) {
        cout << i << endl;
    }
}   
