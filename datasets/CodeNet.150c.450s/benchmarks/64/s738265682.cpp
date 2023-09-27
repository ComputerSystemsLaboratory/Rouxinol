#include <iostream>
#include <vector>
#include <set>

constexpr int DATA_SIZE = 200;

using ListItr_t = std::multiset<int>::const_iterator;

bool _isAbleMake(ListItr_t begin, ListItr_t end, int sum, int value) {
    for (auto itr = begin; itr != end; ++itr) {
        if (!_isAbleMake(begin, itr, sum + *itr, value)) { continue; }

        return true;
    }

    return sum == value;
}

bool isAbleMake(const std::multiset<int> & list, int value) {
    return _isAbleMake(list.cbegin(), list.cend(), 0, value);
}

int main() {

    int n, q;
    std::multiset<int> A;
    std::vector<int> m;
    m.reserve(DATA_SIZE);

    std::cin >> n;
    int count = n;
    while (count--) {
        int t;
        std::cin >> t;
        A.insert(t);
    }

    std::cin >> q;
    count = q;
    while (count--) {
        int t;
        std::cin >> t;
        m.emplace_back(t);
    }

    for (auto value : m) {
        if (isAbleMake(A, value)) {
            std::cout << "yes" << std::endl;
        } else {
            std::cout << "no" << std::endl;
        }
    }

    return 0;

}