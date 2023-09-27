#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (1) {
        cin >> n;
        if (!n) return 0;
        vector<int> v(n);
        
        for (int i = 0; i < n; i++) {
            cin >> v.at(i);
        }
        
        sort(v.begin(), v.end());
        
        int diff;
        for (int i = 1; i < n; i++) {
            if (i == 1) {
                diff = v.at(i) - v.at(i-1);
            } else {
                if (diff > (v.at(i) - v.at(i-1))) {
                    diff = v.at(i) - v.at(i-1);
                }
            }
        }
        
        cout << diff << endl;
    }
}
