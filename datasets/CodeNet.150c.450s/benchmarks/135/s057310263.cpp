#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
    while (1) {
        int n, m, h[1550], w[1550], hs[1550], ws[1550];
        cin >> n >> m;
        if (n == 0 && m == 0) return 0;
        
        for (int i = 0; i <= n; i++) {
            if (i != n) cin >> h[i];
            if (i == 0) hs[i] = 0;
            else hs[i] = hs[i - 1] + h[i - 1];
        }
        for (int i = 0; i <= m; i++) {
            if (i != m) cin >> w[i];
            if (i == 0) ws[i] = 0;
            else ws[i] = ws[i - 1] + w[i - 1];
        }
        
        vector<int> ns, we;
        for (int i = 0; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) ns.push_back(hs[j] - hs[i]);
        }
        for (int i = 0; i <= m; i++) {
            for (int j = i + 1; j <= m; j++) we.push_back(ws[j] - ws[i]);
        }
        
        sort(ns.begin(), ns.end());
        sort(we.begin(), we.end());
        
        /*
        for (int i = 0; i  < ns.size(); i++) cout << ns[i] << " ";
        cout << endl;
        for (int i = 0; i < we.size(); i++) cout << we[i] << " " ;
        cout << endl;*/
        
        int idx1 = 0, idx2 = 0, ans = 0;
        while (idx1 != ns.size() && idx2 != we.size()) {
            if (ns[idx1] < we[idx2]) idx1++;
            else if (ns[idx1] > we[idx2]) idx2++;
            else {
                int same = ns[idx1], sub1 = 0, sub2 = 0;
                while (ns[idx1 + sub1] == same && idx1 + sub1 < ns.size()) sub1++;
                while (we[idx2 + sub2] == same && idx2 + sub2 < we.size()) sub2++;
                //cout << same << " " << sub1 << " " << sub2 << endl;
                ans += sub1 * sub2;
                idx1 += sub1;
                idx2 += sub2;
            }
        }
        
        cout << ans << endl;
    }
}

