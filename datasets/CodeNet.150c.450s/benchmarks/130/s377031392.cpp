#include <iostream>
#include <vector>

auto main () -> int
{
    int n , m;
    std::cin >> n >> m;
    std::vector <std::vector <int>> a (n , std::vector <int> (m , 0));
    for (auto i = 0; i < n; ++ i)
    {
        for (auto j = 0; j < m; ++ j)
        {
            std::cin >> a [i] [j];
        }
    }
    std::vector <int> v (m);
    for (auto j = 0; j < m; ++ j)
    {
        std::cin >> v [j];
    }
    std::vector <int> ans (n);
    for (auto i = 0; i < n; ++ i)
    {
        ans [i] = 0;
        for (auto j = 0; j < m; ++ j)
        {
            ans [i] += a [i] [j] * v [j];
        }
        std::cout << ans [i] << std::endl;
    }
}