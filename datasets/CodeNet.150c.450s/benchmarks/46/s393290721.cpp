#include <iostream>
#include <stack>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, x;
    stack<int> st;
    int i, s;
    int cnt = 0;
    while (cin >> n >> x && (n > 0 || x > 0)) {
        st = stack<int>();
        i = 1; s = 0;
        cnt = 0;
        if (x == 0) {
            cout << 0 << "\n";
            continue;
        }
        while (i<=n) {
            if (st.size()<3 && s+i <= x) {
                st.push(i);
                s += i;
                if (st.size()==3 && s==x)
                    cnt++;
            }
            if (s >= x) {
                i = st.top()+1; s -= st.top(); st.pop();
            }
            else {
                i++;
            }
            while (i > n && st.size() > 0) {
                i = st.top()+1; s -= st.top(); st.pop();
            }
        }
        cout << cnt << "\n";
    }
}