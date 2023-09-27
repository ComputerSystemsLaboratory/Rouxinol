#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, r;
    while (cin >> n >> r, n) {
        stack<int> st;
        for (int i = 0; i < n; i++) {
            st.push(i + 1);
        }
        int p, c;
        while (r--) {
            cin >> p >> c; p--;
            stack<int> a[2];
            while (p--) { a[0].push(st.top()); st.pop(); }
            while (c--) { a[1].push(st.top()); st.pop(); }
            for (int i = 0; i < 2; i++) {
                while (!a[i].empty()) {
                    st.push(a[i].top());
                    a[i].pop();
                }
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}