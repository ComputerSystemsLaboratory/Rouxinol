#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, Q;
    cin >> N;
    int a;
    unordered_map<long long,long long> nums;
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> a;
        nums[a] += 1;
        sum += a;
    }
    cin >> Q;
    long long b, c;
    for (long long i = 0; i < Q; i++) {
        cin >> b >> c;
        if (nums.find(b) != nums.end()) { 
            if (b > c) {
                sum -= (b-c)*nums[b];
            } else {
                sum += (c-b)*nums[b];
            }
            nums[c] += nums[b];
            nums[b] = 0;
        }
        cout << sum << "\n";
    }
}
