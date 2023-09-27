#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

int test(std::size_t p, std::size_t k, const std::vector<std::size_t>& nums)
{
    std::size_t buf = p;
    std::size_t cnt = 1;
    for (std::size_t i = 0; i < nums.size(); ++i) {
        if (nums[i] <= buf) {
            buf -= nums[i];
        } else {
            buf = p;
            buf -= nums[i];
            cnt++;
        }
    }

    return (k - cnt);
}

int main()
{
    std::size_t n, k;
    std::cin >> n >> k;

    std::size_t pmin = 0;
    std::vector<std::size_t> nums;
    std::size_t maxPair = std::ceil((double)n/k);

    nums.reserve(n);
    for (std::size_t i = 0; i < n; ++i) {
        std::size_t w;
        std::cin >> w;
        if (pmin < w) {
            pmin = w;
        }
        nums.push_back(w);
    }

    std::size_t pmax = 0;
    for (std::size_t i = 0; i <= n - maxPair; ++i) {
        std::size_t sum = 0;
        for (std::size_t j = i; j < i + maxPair; ++j) {
            sum += nums[j];
        }
        if (pmax < sum) {
            pmax = sum;
        }
    }

    while (true) {
        if (pmin == pmax) {
            std::cout << pmin << std::endl;
            break;
        } else if ((pmin + 1) == pmax) {
            int ret = test(pmin, k, nums);
            if (ret >= 0) {
                std::cout << pmin << std::endl;
                break;
            } else {
                std::cout << pmax << std::endl;
                break;
            }
        }
        std::size_t ptest = (pmin + pmax) / 2;
        int ret = test(ptest, k, nums);
        if (ret < 0) {
            pmin = ptest;
        } else {
            pmax = ptest;
        }
    }

    return 0;
}
