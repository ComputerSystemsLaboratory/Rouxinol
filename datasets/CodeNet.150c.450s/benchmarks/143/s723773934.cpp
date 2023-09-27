#include <bits/stdc++.h>

using namespace std;

int main () {
    int N;
    cin >> N;
    unordered_map<int, int> m;
    vector<int> nums(N);
    
    long long sum = 0;
    for (int i = 0;i < N; i++) {
        cin >> nums[i];
        m[nums[i]]++;
        sum += nums[i];
    }

    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
         int B, C;
         cin >> B>> C;
         sum += m[B] * (C - B);
         m[C] += m[B];
         m[B] = 0;
         cout << sum << endl;
    }
    return 0;
}