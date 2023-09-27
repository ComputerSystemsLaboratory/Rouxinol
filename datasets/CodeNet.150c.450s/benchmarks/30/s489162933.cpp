#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i ++) cin >> a[i];
    int count = 0;
    for(int i = 0; i < n; i ++) {
        int minj = i;
        for(int j = i; j < n; j ++) {
            if(a[j] < a[minj]) minj = j;
        }
        if(i != minj) count ++;
        swap(a[i], a[minj]);
    }
    for(int i = 0; i < n; i ++) {
        if(i==n-1) cout << a[i] << endl;
        else cout << a[i] << " ";
    }
    cout << count << endl;
    return 0;
}
