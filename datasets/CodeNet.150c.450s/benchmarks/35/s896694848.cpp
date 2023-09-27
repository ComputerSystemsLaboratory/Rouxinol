#include <iostream>
#include <algorithm>
#include <vector>

template <typename Iterator>
auto findMaximumSum (Iterator begin , Iterator end) -> long long
{
    long long res = * begin;
    auto tmp = res;
    for (auto ite = begin + 1; ite != end; ++ ite)
    {
        tmp += * ite;
        res = std::max (res , tmp);
    }
    return res;
}

auto main () -> int
{
    int n;
    while (std::cin >> n && n)
    {
        std::vector <int> a (n);
        for (auto && elem : a)
        {
            std::cin >> elem;
        }
        long long ans = a [0];
        for (auto ite = a.begin (); ite != a.end (); ++ ite)
        {
            auto tmp = findMaximumSum (ite , a.end ());
            ans = std::max (ans , tmp);
        }
        std::cout << ans << std::endl;
    }
}