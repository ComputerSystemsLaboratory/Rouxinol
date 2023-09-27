#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <map>
#include <queue>

static const int MOD = 1000000007;
using ll = long long;
using u32 = unsigned;
using namespace std;

template<class T>
constexpr T INF = ::numeric_limits<T>::max() / 32 * 15 + 208;

int parse(string &s){
    int n = s.size(), ans = 0, cur = 0;
    string t = "mcxi";
    int x[] {1000, 100, 10, 1};
    while(cur < n){
        int a = 1;
        if('0' <= s[cur] && s[cur] <= '9'){
            a = s[cur]-'0';
            cur++;
        }
        for (int i = 0; i < 4; ++i) {
            if(t[i] == s[cur]){
                a *= x[i];
            }
        }
        ans += a;
        cur++;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    while(n--){
        string s, t;
        cin >> s >> t;
        int a = parse(s)+parse(t);
        string ans;
        if(a/1000){
            if(2 <= a/1000){
                ans += to_string(a/1000);
            }
            ans += 'm';
            a -= a/1000*1000;
        }
        if(a/100){
            if(2 <= a/100){
                ans += to_string(a/100);
            }
            ans += 'c';
            a -= a/100*100;
        }
        if(a/10){
            if(2 <= a/10){
                ans += to_string(a/10);
            }
            ans += 'x';
            a -= a/10*10;
        }

        if(a){
            if(2 <= a){
                ans += to_string(a);
            }
            ans += 'i';
            a -= a;
        }
        cout << ans << "\n";
    }
    return 0;
}

