#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(int N, int M) {
    vector<int> h(N+1);
    vector<int> w(M+1);
    
    for (int i = 1; i <= N; i++) {
        cin >> h[i];
        h[i] += h[i-1];
    }
    for (int i = 1; i <= M; i++) {
        cin >> w[i];
        w[i] += w[i-1];
    }
    vector<int> seg;
    for (int i = 0; i <= M; i++) {
        for (int j = i+1; j <= M; j++) {
            seg.push_back(w[j] - w[i]);
        }
    }
    sort(seg.begin(), seg.end());
    int ans = 0;
    for (int i = 0; i <= N; i++) {
        for (int j = i+1; j <= N; j++) {
            int key = h[j] - h[i];
            int l = (int)(lower_bound(seg.begin(), seg.end(), key) - seg.begin());
            int r = (int)(lower_bound(seg.begin(), seg.end(), key+1) - seg.begin());
            ans += r - l;
        }
    }
    return ans;
}

int main(void){
    // Your code here!
    int N, M;
    while (1) {
        cin >> N >> M;
        if (!N && !M) break;
        cout << solve(N, M) << endl;
    }
}

