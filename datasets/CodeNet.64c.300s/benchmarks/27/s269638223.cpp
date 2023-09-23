#include <bits/stdc++.h>
using namespace std;

int solve(int, int);

int main() {
    int n, x;
    
    while(1) {
        cin >> n >> x;
        
        if (n == 0 && x == 0) {
            break;
        } else {
            cout << solve(n, x) << endl;
        }
        
    }
}

int solve(int n, int x) {
    int cnt = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (i + j + k + 3 == x) {
                    cnt++;
                } else if (i + j + k >= x) {
                    break;
                }
            }
        }
    }
    
    return cnt;
}
