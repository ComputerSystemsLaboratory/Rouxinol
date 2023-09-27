#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
    int n, mi, ma;
    while(cin >> n >> mi >> ma, n) {
        vector<int> v(n);
        int gap=0, ans=0;
        for(int i=0; i<n; ++i) {
            cin >> v[i];
        }
        
        for(int i=mi-1; i<ma; ++i) {
            if(gap == v[i] - v[i+1]) {
                ans = max(ans, i+1);
            } else if(gap < v[i] - v[i+1]) {
                gap = v[i] - v[i+1];
                ans = i+1;
            }
        }
        cout << ans << endl;
    }
}