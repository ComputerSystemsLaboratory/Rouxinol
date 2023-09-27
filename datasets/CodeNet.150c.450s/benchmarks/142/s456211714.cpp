#include <iostream>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using lint = long int;
using llint = long long int;
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    vector<llint> scores(n);
    rep(i, n) cin >> scores.at(i);

    //
    // 1 2 3 4 5 6
    // -----
    //   -----
    // 範囲 K の先頭と末尾だけ比較すれば、大小が分かる
    // はず？
    for (int i = 0; i < n - k; i++) {
        if (scores.at(i) < scores.at(i + k))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}

