#include <algorithm>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <complex>
#include <cstring>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <tuple>
#include <vector>
using namespace std;
typedef long long ll;
#define _ << " " <<
#define all(X) (X).begin(), (X).end()
#define Pii pair<int, int>
#define Pll pair<ll, ll>
#define Ti4 tuple<int, int, int, int>
#define Tlll tuple<ll, ll, ll>
#define PI 3.141592653589793

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;

        string ans = "";
        string key[10];
        key[1] = ".,!? ";
        key[2] = "abc";
        key[3] = "def";
        key[4] = "ghi";
        key[5] = "jkl";
        key[6] = "mno";
        key[7] = "pqrs";
        key[8] = "tuv";
        key[9] = "wxyz";

        int idx = 0;
        while (idx < s.size()) {
            int sub = 0;
            if (s[idx] == '0') {
                idx++;  continue;
            }
            while (idx + sub < s.size() && s[idx] == s[idx + sub]) sub++;
            sub--;
            ans += key[s[idx] - 48][sub % key[s[idx] - 48].size()];
            idx += sub + 2;
        }
        cout << ans << endl;
    }
}

