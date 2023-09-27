#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int n, k;

// 最大積載量P以下で積むことができる荷物の数を返す関数
int maxLoaded(const vector<ll>& L, ll P) {
    int i = 0;
    for (int j = 0; j < k; j++) {
        ll sum = 0;
        while (sum + L[i] <= P) {
            sum += L[i];
            i++;
            if (i == n) return n;
        }
    }
    return i;
}

int main(void) {
    cin >> n >> k;

    vector<ll> luggages(n);
    for (int i = 0; i < n; i++) {
        cin >> luggages[i];
    }

    ll left = 0;
    ll right = 100000 * 10000;
    ll mid;
    while (right - left > 1) {
        mid = (left + right)/2;
        int v = maxLoaded(luggages, mid);
        if (v >= n) {
            right = mid;
        } else {
            left = mid;
        }
    }

    cout << right << endl;

    return 0;
}