#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
using int_vec = vector<int>;

int check(int_vec& v, int k, int p) {
    int j = 0;
    auto it = v.begin();
    for (int i = 0; i < k; ++i) {
        int s = 0;
        while (s + *it <= p) {
            s += *it++;
            ++j;
            if (it == v.end())
                return v.size();
        }
    }
    return j;
}

int solve(int_vec& v, int k) {
    int n = v.size();
    int begin = 0;
    int end = accumulate(v.begin(), v.end(), 0);

    while (begin < end - 1) {
        int mid = (begin + end) / 2;
        int x = check(v, k, mid);
        if (x < n) {
            begin = mid;
        } else {
            end = mid;
        }
    }
    return end;
}

int main() {
    int n, k;
    cin >> n >> k;

    int_vec v;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << solve(v, k) << endl;

    return 0;
}