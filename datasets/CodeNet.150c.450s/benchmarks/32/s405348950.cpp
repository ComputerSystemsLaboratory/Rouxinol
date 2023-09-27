#include <bits/stdc++.h>
using namespace std;

int solve(int N, int L, int R) {
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    
    int ret;
    int ma = 1;
    for (int i = L-1; i < R; i++) {
        if (ma <= a[i] - a[i+1]) {
            ret = i+1;
            ma = a[i] - a[i+1];
        }   
    }
    return ret;
}

int main(void){
    // Your code here!
    int N, L, R;
    vector<int> ans;
    while (1) {
        cin >> N >> L >> R;
        if (!N && !L && !R) break;
        ans.push_back(solve(N, L, R));
    }
    for (auto &i : ans) {
        cout << i << endl;
    }
}

