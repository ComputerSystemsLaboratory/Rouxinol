#include <iostream>
#include <vector>

int main(void)
{
    int w, n;
    std::cin >> w >> n;

    std::vector<int> a(n), b(n);
    char temp;

    for(int i = 0; i < n; ++i)
    {
        std::cin >> a[i] >> temp >> b[i];
    }

    std::vector<int> result(n);
    for(int i = 0; i < w; ++i)
    {
        result[i] = i + 1;
    }

    for(int i = 0; i < n; ++i)
    {
        std::swap(result[a[i] - 1], result[b[i] - 1]);
    }

    for(int i = 0; i < w; ++i)
    {
        std::cout << result[i] << std::endl;
    }

    return 0;
}