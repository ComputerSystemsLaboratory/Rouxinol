#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N--) {
        vector<int> a(10);
        for (int i = 0; i < 10; i++) {
            cin >> a[i];
        }
        bool pos = 1;
        stack<int> st[2];
        st[0].push(a[0]);
        for (int i = 1; i < 10; i++) {
            bool use = 0;
            for (int j = 0; j < 2; j++) {                
                if (st[j].empty() || st[j].top() < a[i]) {
                    st[j].push(a[i]);
                    use = 1;
                    break;
                }
            }
            if (!use) {
                pos = 0;
                break;
            }
        }
        cout << (pos ? "YES" : "NO") << endl;
    }
    return 0;
}