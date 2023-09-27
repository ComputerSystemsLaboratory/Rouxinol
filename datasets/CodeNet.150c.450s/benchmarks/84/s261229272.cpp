#include <bits/stdc++.h>

#define REP(i,n) for (int i=0;i<(n);++i)
#define all(a) (a).begin(),(a).end()

using namespace std;

template<class T>
class fenwick_tree {
private:
    const size_t size;
    const std::function<T(T, T)> f;
    const T unit;
    std::vector<T> a;
public:
    fenwick_tree(size_t size, std::function<T(T, T)> f, T unit) : size(size), f(f), unit(unit), a(size, unit) { }

    void update(size_t i, T x) {
        for (size_t j = i; j < size; j |= j + 1) {
            a[j] = f(a[j], x);
        }
    }

    T query(size_t i) const {
        T result = unit;
        for (size_t j = i; j > 0; j = (j & (j + 1))) {
            result = f(result, a[--j]);
        }
        return result;
    }
};

template <class T>
std::vector<size_t> argsort(const std::vector<T> &a) {
    std::vector<size_t> result(a.size());
    for (size_t i = 0; i < result.size(); ++i) {
        result[i] = i;
    }
    std::sort(result.begin(), result.end(), [&](size_t i, size_t j) { return a[i] < a[j]; });
    return result;
}

template <class Iterator>
unsigned long long inversion_number(Iterator first, Iterator last) {
    using T = typename std::iterator_traits<Iterator>::value_type;

    size_t n = std::distance(first, last);
    std::vector<size_t> a = argsort(std::vector<size_t>(first, last));
    unsigned long long result = 0;
    fenwick_tree<size_t> range_sum_query(n, [](size_t x, size_t y) { return x + y; }, 0);
    for (auto it = a.rbegin(); it != a.rend(); ++it) {
        result += range_sum_query.query(*it);
        range_sum_query.update(*it, 1);
    }
    return result;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> a(n);
    REP(i, n) cin >> a[i];

    cout << inversion_number(all(a)) << endl;
    return 0;
}
