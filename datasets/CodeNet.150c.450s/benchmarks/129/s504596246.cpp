#include <iostream>
#include <vector>

auto sum (const std::vector <int> & xs) -> int
{
    auto res = 0;
    for (auto && elem : xs)
    {
        res += elem;
    }
    return res;
}

auto sum (const std::vector <std::vector <int>> & xs) -> std::vector <int>
{
    std::vector <int> res (xs [0].size () , 0);
    for (auto i = 0u; i < res.size (); ++ i)
    {
        for (auto j = 0u; j < xs.size (); ++ j)
        {
            res [i] += xs [j] [i];
        }
    }
    return res;
}

auto main () -> int
{
    int h , w;
    std::cin >> h >> w;
    std::vector <std::vector <int>> a (h , std::vector <int> (w));
    for (auto && lines : a)
    {
        for (auto && elem : lines)
        {
            std::cin >> elem;
        }
    }
    for (auto && lines : a)
    {
        for (auto && elem : lines)
        {
            std::cout << elem << ' ';
        }
        std::cout << sum (lines) << std::endl;
    }
    auto sa = sum (a);
    for (auto && elem : sa)
    {
        std::cout << elem << ' ';
    }
    std::cout << sum (sa) << std::endl;
}