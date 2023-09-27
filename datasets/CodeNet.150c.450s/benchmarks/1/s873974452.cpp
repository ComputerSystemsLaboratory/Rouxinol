//#include "Algorithm/LongestIncreasingSubsequence.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

template <typename T>
constexpr T INF = numeric_limits<T>::max() / 10;

template <typename T>
int LongestIncreasingSubsequence(const vector<T>& a)
{
    const int n = a.size();
    vector<T> dp(n, INF<T>);
    for (int i = 0; i < n; i++) {
        *lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
        //        *upper_bound(dp.begin(), dp.end(), a[i]) = a[i];
    }
    return lower_bound(dp.begin(), dp.end(), INF<T>) - dp.begin();
}

int main()
{
    int N;
    cin >> N;
    vector<ll> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    cout << LongestIncreasingSubsequence(a) << endl;

    return 0;
}