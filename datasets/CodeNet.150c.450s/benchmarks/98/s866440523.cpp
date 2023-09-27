#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, S, T;
    while(cin >> n >> m && n && m) {
        vector<int> s(n),t(m);
        int ss, st;
        
        ss = st = 0;
        for(int i = 0; i < n; i++) {
            cin >> s[i];
            ss += s[i];
        }

        for(int i = 0; i < m; i++) {
            cin >> t[i];
            st += t[i];
        }
        
        int u = 9999, v = 9999;
        int sum = u + v;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if((ss + 2 * t[j]) == (st + 2 * s[i])) {
                    if(sum > (s[i] + t[j])) {
                        u = s[i]; v = t[j];
                        sum = u + v;
                    }
                }
            }
        }
        if(u == 9999 && v == 9999) {
            cout << -1 << endl;
        } else {
            cout << u << " " << v << endl;
        }
    }
}