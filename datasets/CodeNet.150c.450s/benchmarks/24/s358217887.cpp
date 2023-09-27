#include <iostream>
#include <tuple>
#include <algorithm>

int N {}, M {};

int princess(std::tuple<int, int> t[])
{
    std::sort(t, t + N);
    std::reverse(t, t + N);
    for (int i {}; i < N; ++i)
        if (std::get<1>(t[i]) <= M)
        {
            M -= std::get<1>(t[i]);
            std::get<1>(t[i]) = 0;
        }
        else
        {
            std::get<1>(t[i]) -= M;
            break;
        }
    
    int ans {};
    for (int i {}; i < N; ++i)
        ans += std::get<0>(t[i]) * std::get<1>(t[i]);
    return ans;
}

int main()
{
    while (std::cin >> N >> M && N > 0)
    {    
        std::tuple<int, int> t[N];
        for (int i {}; i < N; ++i)
        {
            int d {}, p {};
            std::cin >> d >> p;
            t[i] = std::make_tuple(p, d);
        }
        std::cout << princess(t) << std::endl;
    }
}
