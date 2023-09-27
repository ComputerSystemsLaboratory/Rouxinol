// AOJ NTL_1_A
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A

#include <iostream>
#include <map>

namespace cplib {
    template <typename T>
    std::map<T, int> factorize(T n) {
        T n0 = n, div = 2;
        std::map<T, int> res;
        while (n > 1 && div * div <= n0) {
            if (n % div == 0) {
                res[div]++;
                n /= div;
            } else {
                div++;
            }
        }
        if (n > 1) {
            res[n]++;
        }
        return res;
    }
}

int main() {
    int64_t n;
    std::cin >> n;

    auto fact = cplib::factorize(n);

    std::cout << n << ":";
    for (auto p: fact) {
        for (int i = 0; i < p.second; i++) {
            std::cout << " " << p.first;
        }
    }
    std::cout << std::endl;

    return 0;
}

