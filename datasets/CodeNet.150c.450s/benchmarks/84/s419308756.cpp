#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll merge(vector<int>& nums, int l, int m, int r)
{
    vector<int> left(m - l + 1);
    vector<int> right(r - m + 1);
    for (int i = 0; i < m - l; i++) {
        left[i] = nums[l + i];
    }
    left.back() = numeric_limits<int>::max();
    for (int i = 0; i < r - m; i++) {
        right[i] = nums[m + i];
    }
    right.back() = numeric_limits<int>::max();
    ll ans = 0;
    int i = 0;
    int j = 0;
    for (int k = l; k < r; k++) {
        if (left[i] <= right[j]) {
            nums[k] = left[i++];
        } else {
            nums[k] = right[j++];
            ans += m - l - i;
        }
    }
    return ans;
}

ll mergeSort(vector<int>& nums, int l, int r)
{
    if (r - l <= 1) {
        return 0;
    }
    int m = l + (r - l) / 2;
    ll ans = 0;
    ans += mergeSort(nums, l, m);
    ans += mergeSort(nums, m, r);
    ans += merge(nums, l, m, r);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    ll ans = mergeSort(nums, 0, nums.size());
    cout << ans << endl;
}
