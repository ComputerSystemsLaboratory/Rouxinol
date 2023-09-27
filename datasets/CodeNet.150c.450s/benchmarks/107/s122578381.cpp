// ２つの文字列 s1、s2 の編集距離（レーベンシュタイン距離）を求める

#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <functional>
#include <numeric>
#include <climits>
#include <cassert>

using namespace std;
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)
#define FOR(i,a,b) for(int i = (a); i < (int)(b); ++i)
#define ALL(c) (c).begin(), (c).end()
#define SIZE(v) ((int)v.size())

#define pb push_back
#define mp make_pair

// 参考：https://ja.wikipedia.org/wiki/%E3%83%AC%E3%83%BC%E3%83%99%E3%83%B3%E3%82%B7%E3%83%A5%E3%82%BF%E3%82%A4%E3%83%B3%E8%B7%9D%E9%9B%A2
int calc_edit_distance(string s1, string s2) {
    int len1 = SIZE(s1);
    int len2 = SIZE(s2);
    // len1+1 行 len2+1 列のテーブルを用意
    vector<vector<int>> d(len1+1, vector<int>(len2+1));
    REP(i, len1+1) d[i][0] = i;
    REP(i, len2+1) d[0][i] = i;
    FOR(i1, 1, len1+1) {
        FOR(i2, 1, len2+1) {
            int cost = (s1[i1-1] == s2[i2-1]) ? 0 : 1;
            d[i1][i2] = min(min(d[i1-1][i2] + 1,
                                d[i1][i2-1] + 1),
                            d[i1-1][i2-1] + cost);
        }
    }
    return d[len1][len2];
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    auto ans = calc_edit_distance(s1, s2);
    cout << ans << endl;

    return 0;
}

