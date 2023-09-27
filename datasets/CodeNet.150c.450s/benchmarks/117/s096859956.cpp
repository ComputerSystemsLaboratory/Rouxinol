#include <iostream>
#include <vector>
#include <limits>

int merge(std::vector<int> & list, int left, int mid, int right) {
    constexpr int MAX = std::numeric_limits<int>::max();

    std::vector<int> l_list, r_list;
    l_list.reserve(mid - left + 1);
    for (int i = left; i < mid; ++i) {
        l_list.emplace_back(list.at(i));
    }
    l_list.emplace_back(MAX);
    l_list.reserve(right - mid + 1);
    for (int i = mid; i < right; ++i) {
        r_list.emplace_back(list.at(i));
    }
    r_list.emplace_back(MAX);

    int left_id = 0;
    int right_id = 0;
    int count = 0;
    for (int i = left; i < right; ++i) {
        ++count;
        if (l_list.at(left_id) <= r_list.at(right_id)) {
            list.at(i) = l_list.at(left_id);
            ++left_id;
        } else {
            list.at(i) = r_list.at(right_id);
            ++right_id;
        }
    }
    return count;
}

int mergeSort(std::vector<int> & list, int left, int right) {
    if (left + 1 < right) {
        int count = 0;
        const int mid = (left + right) / 2;
        count += mergeSort(list, left, mid);
        count += mergeSort(list, mid, right);
        count += merge(list, left, mid, right);
        return count;
    }
    return 0;
}

int main() {

    int n;
    std::cin >> n;

    std::vector<int> S;
    S.reserve(n);
    while (n--) {
        int t;
        std::cin >> t;
        S.emplace_back(t);
    }

    int count = mergeSort(S, 0, S.size());

    std::cout << S.front();
    const auto endItr = S.cend();
    for (auto itr = S.cbegin() + 1; itr != endItr; ++itr) {
        std::cout << " " << *itr;
    }
    std::cout << std::endl;
    std::cout << count << std::endl;

    return 0;

}