#include <iostream>
#include <vector>
#include <utility>
#include <map>
//#include "../cxx-prettyprint/prettyprint.hpp"
using std::vector;
using std::pair;

std::map<vector<pair<int, int>>, int> memo;

int get_minimum_multiplication(vector<pair<int, int>> matrix_sizes) {
    if (matrix_sizes.size() == 1) {
        return 0;
    } else if (matrix_sizes.size() == 2) {
        return matrix_sizes[0].first * matrix_sizes[0].second * matrix_sizes[1].second;
    } else if (memo.find(matrix_sizes) != memo.end()) {
        return memo[matrix_sizes];
    } else {
        int min_count = 0;
        for (int i = 1; i < matrix_sizes.size(); i ++) {
            vector<pair<int, int>> left, right;
            std::copy(matrix_sizes.begin(), matrix_sizes.begin() + i, std::back_inserter(left));
            std::copy(matrix_sizes.begin() + i, matrix_sizes.end(), std::back_inserter(right));
            int min_count_left = get_minimum_multiplication(left);
            int min_count_right = get_minimum_multiplication(right);
            int count = min_count_left +
                        min_count_right +
                        left.front().first * left.back().second * right.back().second;
            if (min_count == 0) {
                min_count = count;
            } else {
                min_count = std::min(min_count, count);
            }
        }
        memo[matrix_sizes] = min_count;
        return min_count;
    }
}

int main() {
    int n;
    std::cin >> n;
    vector<pair<int, int>> matrix_sizes(n);
    for (auto& size : matrix_sizes) {
        std::cin >> size.first >> size.second;
    }

    std::cout << get_minimum_multiplication(matrix_sizes) << std::endl;
}

