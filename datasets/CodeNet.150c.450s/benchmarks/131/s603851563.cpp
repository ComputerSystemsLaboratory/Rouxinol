#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#define REP(i, n) for ( int i = 0; i < n; i++ )

using namespace std;

int sum(string s) {
    reverse(s.begin(), s.end());
    int res = 0, ten = 1;
    REP(i, s.size()) {
        int tmp = (int)s[s.size()-1-i]-48;
        if ( tmp > 0 ) {
            res += tmp * ten;
        }
        ten *= 10;
    }
    return res;
}
int dup(int ns[], int i) {
    REP(j, i) {
        if ( ns[i] == ns[j] ) return j;
    }
    return -1;
}

int main() {
    int a, l;
    stringstream ss;

    while (cin >> a >> l, a || l) {
        int ns[21];

        ns[0] = a;

        REP(i, 20) {
            ss.str("");
            ss << a;
            string tmp = ss.str();
            // cout << tmp << endl;

            // ゼロ埋め
            while(tmp.size() < l) {
                tmp = "0" + tmp;
            }

            // 最大値を出す
            sort(tmp.begin(), tmp.end());
            int big = sum(tmp);

            // 最小値を出す
            reverse(tmp.begin(), tmp.end());
            int sml = sum(tmp);

            ns[i+1] = a = big - sml;
            // cout << big << " " << sml << " " << a << endl;

            // 重複があれば
            int res = dup(ns, i+1);
            if ( res >= 0 ) {
                printf("%d %d %d\n", res, ns[i+1], i+1-res);
                // cout << res << " " << ns[i+1] << " " << i+1-res << endl;
                break;
            }
        }
    }

    return 0;
}
