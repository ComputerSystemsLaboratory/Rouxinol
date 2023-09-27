#include <bits/stdc++.h>
using namespace std;

//Function Macros:
#define rep(i, n) for(int(i) = 0; (i) < (n); (i)++)
#define all(v) (v).begin(), (v).end()
#define setpre(n) cout << fixed << setprecision(n)

//Type / Class / Struct Definitions:
using ll = long long;
using ull = unsigned long long;

//Constants:
const int INF = 2e9;
const int MOD = 1e9 + 7;

//Global Variables:

//Prototype Declarations:
int gcd(int, int);

//================ Main Loop ================
int main() {
    string str;
    cin >> str;
    stack<int> pt;
    stack<pair<int, int>> area;
    rep(i, str.size()) {
        if(str[i] == '\\') {
            pt.push(i);
        } else if(str[i] == '/' && !pt.empty()) {
            int j = pt.top();
            int a = i - j;
            pt.pop();
            if(area.empty()) {
                area.push(make_pair(j, a));
            } else {
                while(!area.empty()) {
                    if(area.top().first > j) {
                        a += area.top().second;
                        area.pop();
                    } else {
                        break;
                    }
                }
                area.push(make_pair(j, a));
            }
        }
    }

    //put ans
    vector<int> ans;
    while(!area.empty()) {
        ans.emplace_back(area.top().second);
        area.pop();
    }
    reverse(all(ans));
    int sum = 0;
    rep(i, ans.size()) {
        sum += ans[i];
    }
    cout << sum << endl;
    cout << ans.size();
    rep(i, ans.size()) {
        cout << " " << ans[i];
    }
    cout << endl;
    return 0;
}
//===========================================

//Functions:
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}
