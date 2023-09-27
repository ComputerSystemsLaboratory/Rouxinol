#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>

using namespace std;

template<typename T>
class BIT {
private:
    uint32_t n;
    vector<T> vec;

public:
    BIT(uint32_t n) : n(n) {
        vec.resize(n+1);
        fill(vec.begin(), vec.end(), 0);
    }

    void add(uint32_t a, T x) {
        for (uint32_t i = a; i <= n; i += i & -i) vec[i] += x;
    }

    T sum(uint32_t a) {
        T sum = 0;
        for (uint32_t i = a; i > 0; i -= i & -i) sum += vec[i];
        return sum;
    }
};

int main() {
    int32_t n, q;
    scanf("%d %d", &n, &q);

    BIT<int32_t> bit(n);

    for (int32_t i = 0; i < q; i++) {
        int32_t com, x, y;
        scanf("%d %d %d", &com, &x, &y);

        if (com) printf("%d\n", bit.sum(y) - bit.sum(x-1));
        else bit.add(x, y);
    }

    return 0;
}