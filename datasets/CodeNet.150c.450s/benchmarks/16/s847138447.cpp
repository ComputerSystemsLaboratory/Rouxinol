#include <bits/stdc++.h>
 
using namespace std;
typedef pair<int, int> P;
 
int main(void) {
    string s;
    cin >> s;
 
    int sum_all = 0, sum, lev = 0;
    stack<int> st;
    stack<P> stP;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '\\')
            st.push(i);
        else if (s[i] == '/') {
            if (st.empty()) continue;
            int j = st.top(); st.pop();
 
            sum_all += i - j;
            sum = i - j;
            while (stP.size() > 0 && j < stP.top().first) {
                sum += stP.top().second;
                stP.pop();
            }
            stP.push(P(j, sum));
        }
    }
 
    vector<int> v;
    while (stP.size()) {
        v.push_back(stP.top().second);
        stP.pop();
    }
    reverse(v.begin(), v.end());
 
 
    cout << sum_all << endl;
    cout << v.size();
    for (int  i = 0; i < v.size(); i++)
        cout << " " << v[i];
    cout << endl;
 
    return 0;
}
