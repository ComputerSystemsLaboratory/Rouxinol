#include <iostream>
#include <vector>

using namespace std;

template<typename T>
bool linear_search(vector<T> S, T t) {
    for (T s : S) if (s == t) return true;
    return false;
}

int main() {
    uint32_t n, q, count = 0;

    cin >> n;
    vector<uint32_t> S(n);
    for (uint32_t &s : S) cin >> s;

    cin >> q;
    while (q--) {
        uint32_t t;
        cin >> t;
        if (linear_search(S, t)) count++;
    }

    cout << count << endl;

    return 0;
}