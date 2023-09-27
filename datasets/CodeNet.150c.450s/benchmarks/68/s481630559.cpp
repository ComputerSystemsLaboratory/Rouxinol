#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int N;
    while (1) {
        cin >> N;
        if (!N) break;
        vector<int> a(N);
        for (int i = 0; i < N; i++) {
            cin >> a[i];
        }
        int ans = 10000000;
        for (int i = 0; i < N; i++) {
            for (int j = i+1; j < N; j++) {
                ans = min(ans, abs(a[i] - a[j]));   
            }
        }
        cout << ans << endl;
    }
}

