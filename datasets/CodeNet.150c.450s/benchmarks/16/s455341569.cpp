#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i) 
#define PI acos(-1)

using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s, srev;
    cin>>s;
    reverse_copy(s.begin(), s.end(), back_inserter(srev));
    stack<int> st, strev;
    int space = 0;
    int spacerev = 0;
    vector<int> cut, cutrev;
    rep(i, s.size()) {
        if (s[i] == '\\') st.push(i);
        else if (s[i] == '/' && !st.empty()) {
            int l = st.top(); st.pop();
            space += i - l;
            if (st.empty()) {
                cut.push_back(space);
                space = 0;
            }
        }

        if (srev[i] == '/') strev.push(i);
        else if (srev[i] == '\\' && !strev.empty()) {
            int l = strev.top(); strev.pop();
            spacerev += i - l;
            if (strev.empty()) {
                cutrev.push_back(spacerev);
                spacerev = 0;
            }
        }
    }
    if (space != 0) cut.push_back(space);
    if (spacerev != 0) cutrev.push_back(spacerev);

    int sum = accumulate(cut.begin(), cut.end(), 0);
    reverse(cutrev.begin(), cutrev.end());
    int cnt = 0;
    int ci = 0;
    int cri = 0;
    vector<int> ans = {0};
    space = 0; spacerev = 0;
    for (int i = 1; i < sum + 1; ++i) {
        if (space + cut[ci] == i && spacerev + cutrev[cri] == i) {
            space += cut[ci]; spacerev += cutrev[cri];
            ans.push_back(i);
            ci++; cri++; cnt++;
        }
        else if (space + cut[ci] == i) {
            space += cut[ci];
            ans.push_back(i);
            ci++; cnt++;
        }
        else if (spacerev + cutrev[cri] == i) {
            spacerev += cutrev[cri];
            ans.push_back(i);
            cri++; cnt++;
        }
    }

    cout<<sum<<endl;
    cout<<cnt;
    rep(i, ans.size() - 1) cout<<" "<<ans[i + 1] - ans[i];
    cout<<endl;
}
