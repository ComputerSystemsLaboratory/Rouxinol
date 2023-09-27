#include<bits/stdc++.h>
using namespace std;
using P = pair<int, int>;
int main(void) {
    string s;
    cin >> s;
    stack<int> k;
    vector<P> a;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '\\') k.push(i);
        if(s[i] == '/' && !k.empty()) {
            int t = k.top();
            k.pop();
            int sum = 0;
            for(int j = a.size() - 1; j >= 0; j--) {
                if(a[j].first < t) break;
                sum += a[j].second;
                a.pop_back();
            }
            a.push_back(P(t, i - t + sum));
        }
    }
    int ans = 0;
    for(int i = 0; i < a.size(); i++) ans += a[i].second;
    cout << ans << endl << a.size();
    for(int i = 0 ; i < a.size(); i++) cout << ' ' << a[i].second;
    cout << endl;
    return 0;
}
