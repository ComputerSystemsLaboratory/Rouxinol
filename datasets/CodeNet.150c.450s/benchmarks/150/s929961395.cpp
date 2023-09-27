#include <iostream>
#include <vector>

using namespace std;
using int_vec = vector<int>;

const int MAX_NUM = 10000;

void print(const int_vec& v) {
    auto it = v.begin();
    for (; it != v.end()-1; ++it) {
        cout << *it << " ";
    }
    cout << *it << endl;
}

int_vec counting_sort(const int_vec& a) {
    int_vec count(MAX_NUM+1, 0);

    for (auto it = a.begin(); it != a.end(); ++it) {
        ++count[*it];
    }
    for (auto it = count.begin(); it != count.end(); ++it) {
        *it += *(it-1);
    }

    int_vec b(a.size());
    for (auto it = a.rbegin(); it != a.rend(); ++it) {
        b[--count[*it]] = *it;
    }
    return b;
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

    auto r = counting_sort(v);
    print(r);

    return 0;
}