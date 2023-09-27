#include <algorithm>
#include <cctype>
#include <cstdio>
#include <iostream>
#include <locale>
#include <numeric>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int solve(int n) {
    string s;
    int migi   = 0;
    int hidari = 0;
    int ans    = 0;
    int asi    = -1;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "lu") {
            hidari = 1;
            if (migi == hidari && asi == 1) ans++;
            asi = 0;
        } else if (s == "ru") {
            migi = 1;
            if (migi == hidari && asi == 0) ans++;
            asi = 1;
        } else if (s == "ld") {
            hidari = 0;
            if (migi == hidari && asi == 1) ans++;
            asi = 0;
        } else if (s == "rd") {
            migi = 0;
            if (migi == hidari && asi == 0) ans++;
            asi = 1;
        }
    }
    return ans;
}

int main(int argc, char const *argv[]) {
    int n;
    vector<int> ans;
    while (1) {
        cin >> n;
        if (n == 0) break;
        ans.push_back(solve(n));
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
}

