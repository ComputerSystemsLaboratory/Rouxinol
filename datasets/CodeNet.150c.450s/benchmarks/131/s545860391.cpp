#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
using namespace std;
#define INF 100000000

typedef long long ll;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

int pow0[] = {1, 10, 100, 1000, 10000, 100000, 1000000};

int newNum(int a, int l) {
    string s;
    for (int i = 0; i < l; i++) s += '0';
    s += to_string(a);
    s = s.substr(s.size()-l, l);
    sort(s.begin(), s.end());
    int minNum = 0, maxNum = 0;
    for (int i = 0; i < s.size(); i++) {
        maxNum += (s[i]-'0') * pow0[i];
        minNum += (s[l-i-1]-'0') * pow0[i];
    }
    return maxNum - minNum;
}

int main(void) {
    int a, L;
    while (cin >> a >> L) {
        if (a == 0 && L == 0) break;
        map<int, int> m;
        m.insert(make_pair(a, 0));
        int cur = 1;
        while (1) {
            int tmp = newNum(a, L);
            if (m.count(tmp) > 0) {
                cout << m[tmp] << " " << tmp << " " << m.size()-m[tmp] << endl;
                break;
            }
            m.insert(make_pair(tmp, cur++));
            a = tmp;
        }
    }
    return 0;
}