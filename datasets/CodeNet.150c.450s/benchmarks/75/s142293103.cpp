#include <iostream>
#include <vector>

using namespace std;
using int_vec = vector<int>;

void heapify(int_vec& v, int i) {
    int max;

    auto h = v.size();
    auto l = i * 2 + 1;
    auto r = i * 2 + 2;
    if (l < h && v[l] > v[i]) {
        max = l;
    } else {
        max = i;
    }
    if (r < h && v[r] > v[max]) {
        max = r;
    }

    if (max != i) {
        swap(v[i], v[max]);
        heapify(v, max);
    }
}

void heapify(int_vec& v) {
    for (int i = v.size() / 2; i >= 0; --i) {
        heapify(v, i);
    }
}

int main() {
    int n;
    cin >> n;

    int_vec v;
    for (auto i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    heapify(v);

    for (auto& a: v) {
        cout << " " << a;
    }
    cout << endl;

    return 0;
}