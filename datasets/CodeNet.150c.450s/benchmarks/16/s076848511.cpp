#include <bits/stdc++.h>
#define INF 1e9
using namespace std;

#define REPR(i,n) for(int i=(n); i >= 0; --i)
#define FOR(i, m, n) for(int i = (m); i < (n); ++i)
#define REP(i, n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define ALL(a)  (a).begin(),(a).end()
#define endl "\n"

template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
typedef long long ll;

void solve() {
    string S;
    cin >> S;
    stack<int> s1;
    stack<pair<int,int>> s2;
    ll sm = 0;
    REP(i,S.size()) {
        switch (S[i]) {
            case '\\':
                s1.push(i);
                break;
            case '/':
                if(s1.empty()) break;
                auto top = s1.top(); s1.pop();
                sm += i - top;

                auto mizutamari = i-top;
                while(!s2.empty() && s2.top().first > top) {
                    mizutamari += s2.top().second; s2.pop();
                }
                s2.emplace(top,mizutamari);
        }
    }

    list<int> ans;
    while(!s2.empty()) {
        ans.push_front(s2.top().second); s2.pop();
    }
    ans.push_front(ans.size());
    cout << sm << endl;

    for(auto i = ans.begin(); i != ans.end(); i++) {
        if(i != ans.begin()) cout << ' ';
        cout << *i;
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}
