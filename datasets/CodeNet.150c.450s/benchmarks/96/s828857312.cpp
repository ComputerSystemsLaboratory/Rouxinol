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

string moji[10];

int main(void) {
    int n;
    moji[1] = ".,!? ";
    moji[2] = "abc";
    moji[3] = "def";
    moji[4] = "ghi";
    moji[5] = "jkl";
    moji[6] = "mno";
    moji[7] = "pqrs";
    moji[8] = "tuv";
    moji[9] = "wxyz";
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        string ans;
        for (int i = 0; i < s.size(); i++) {
            int num = 0;
            while (s[i] != '0') {
                i++;
                num++;
            }
            if (num == 0) continue;
            int tmp = s[i-1] - '0';
            if (tmp == 1) num = (num-1) % 5;
            else if (tmp == 7 || tmp == 9) num = (num-1) % 4;
            else num = (num-1) % 3;
            ans += moji[tmp][num];
        }
        cout << ans << endl;
    }
    return 0;
}