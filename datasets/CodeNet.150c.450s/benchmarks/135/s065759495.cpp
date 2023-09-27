#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
int main(void){
    int n, m, t;
    while (cin>>n>>m && n) {
        vector<int> h, w;
        h.push_back(0);
        w.push_back(0);
        for (int i = 0; i < n; i++) {
            cin >> t;
            h.push_back(h[i] + t);
        }
        for (int i = 0; i < m; i++) {
            cin >> t;
            w.push_back(w[i] + t);
        }
        
        vector<int> a, b;
        for (int i = 0; i < h.size()-1; i++) {
            for (int j = i+1; j < h.size(); j++) {
                t = h[j] - h[i];
                a.push_back(t);
            }
        }
        for (int i = 0; i < w.size()-1; i++) {
            for (int j = i+1; j < w.size(); j++) {
                t = w[j] - w[i];
                b.push_back(t);
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        //for (int i = 0; i < h.size(); i++) cout << h[i] << " "; cout << endl;
        //for (int i = 0; i < w.size(); i++) cout << w[i] << " "; cout << endl;
        //for (int i = 0; i < a.size(); i++) cout << a[i] << " "; cout << endl;
        //for (int i = 0; i < b.size(); i++) cout << b[i] << " "; cout << endl;
        
        int bi = 0, ans = 0;
        for (int ai = 0; ai < a.size(); ai++) {
            int c = 1;
            while (1) {
                if (a[ai] == a[ai+1] && ai+1 < a.size()) {
                    ai++;
                    c++;
                }
                else break;
            }
            while (1) {
                if (b[bi] < a[ai] && bi+1 < b.size()) bi++;
                else break;
            }
            if (a[ai] == b[bi]) {
                int d = 1;
                while (1) {
                    if (b[bi] == b[bi+1] && bi+1 < b.size()) {
                        bi++;
                        d++;
                    }
                    else break;
                }
                //printf("a[ai]=%d b[bi]=%d ans+=%d*%d\n",a[ai],b[bi],c,d);
                ans += c * d;
            }
        }
        cout << ans << endl;
    }
}