/**
 *    author:  FromDihPout
 *    created: 2020-07-14
**/

#include <bits/stdc++.h>
using namespace std;


int f(vector<int> &nums) {
    int x = nums[0], y = nums[1], z = nums[2];
    return x * x + y * y + z * z
        + x * y + y * z + x * z;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> nums(3, 1), ways(n + 1);
    int mx = 1;
    while (f(nums) <= n) {
        mx++;
        nums[0] = mx;
    }
    
    for (int i = 1; i < mx; i++) {
        nums[0] = i;
        for (int j = i; j < mx; j++) {
            nums[1] = j;
            for (int k = j; k < mx; k++) {
                nums[2] = k;
                int val = f(nums);
                if (val <= n) {
                    set<int> unique;
                    for (int i : nums) {
                        unique.insert(i);
                    }
                    if (unique.size() == 1) {
                        ways[val] += 1;
                    }
                    else if (unique.size() == 2) {
                        ways[val] += 3;
                    }
                    else {
                        ways[val] += 6;
                    }
                }
            }
        }
    }
    
    for (int i = 1; i <= n; i++) {
        cout << ways[i] << '\n';
    }
    return 0;
}