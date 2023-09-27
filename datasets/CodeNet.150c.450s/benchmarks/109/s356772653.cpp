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
    vector<int> imos(60*60*24+1);
    for (int i = 0; i < N; i++) {    
        string h, m, s;
        getline(cin, h, ':');
        getline(cin, m, ':');
        getline(cin, s, ' ');
        int H = stoi(h);
        int M = stoi(m);
        int S = stoi(s);
        imos[H*60*60+M*60+S]++;
        getline(cin, h, ':');
        getline(cin, m, ':');
        getline(cin, s);
        H = stoi(h);
        M = stoi(m);
        S = stoi(s);
        imos[H*60*60+M*60+S]--;
    }
    int ret = 0;
    for (int i = 1; i < imos.size(); i++) {
        imos[i] += imos[i-1];
        ret = max(imos[i], ret);
    }
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
