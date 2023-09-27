#include <iostream>
#include <vector>
#include <sstream>

auto product (const std::vector <std::vector <long long>> & a , const std::vector <std::vector <long long>> & b) -> std::vector <std::vector <long long>>
{
    std::vector <std::vector <long long>> res (a.size () , std::vector <long long> (b[0].size () , 0));
    for (auto i = 0u; i < res.size (); ++ i)
    {
        for (auto j = 0u; j < res[0].size (); ++ j)
        {
            for (auto k = 0u; k < b.size (); ++ k)
            {
                res [i] [j] += a [i] [k] * b [k] [j];
            }
        }
    }
    return res;
}

template <typename T>
auto unwords (const T & xs) -> std::string
{
    auto begin = xs.begin ();
    auto end = xs.end ();
    std::ostringstream ss;
    for (auto ite = begin; ite != end; ++ ite)
    {
        ss << * ite;
        if (ite + 1 < end)
        {
            ss << ' ';
        }
    }
    return ss.str ();
}

template <typename F , typename T>
auto map (F f , const std::vector <T> & xs) -> std::vector <decltype (f (xs [0]))>
{
    std::vector <decltype (f (xs [0]))> res (xs.size ());
    for (auto i = 0u; i < xs.size (); ++ i)
    {
        res [i] = f (xs [i]);
    }
    return res;
}

struct
{
    template <typename T>
    auto operator () (T && x) -> std::string
    {
        std::ostringstream ss;
        ss << std::forward <T> (x);
        return ss.str ();
    }
} show;

auto main () -> int
{
    long long n , m , l;
    std::cin >> n >> m >> l;
    std::vector <std::vector <long long>> a (n , std::vector <long long> (m , 0));
    std::vector <std::vector <long long>> b (m , std::vector <long long> (l , 0));
    for (auto && lines : a)
    {
        for (auto && elem : lines)
        {
            std::cin >> elem;
        }
    }
    for (auto && lines : b)
    {
        for (auto && elem : lines)
        {
            std::cin >> elem;
        }
    }
    for (auto && lines : product (a , b))
    {
        std::cout << unwords (map (show , lines)) << std::endl;
    }
}