#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    bool flag = 1;
    int count = 0;
    while(flag) {
        flag = 0;
        for(int i = n-1; i > 0; i --) {
            if(a[i]<a[i-1]) {
                swap(a[i], a[i-1]);
                count ++;
                flag = 1;
            }
        }
    }
    for(int i = 0; i < n; i ++) {
        if(i==n-1) cout << a[i] << endl;
        else cout << a[i] << " ";
    }
    cout << count << endl;
    return 0;
}
