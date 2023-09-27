#include <iostream>
#include <vector>

int sort(std::vector<int> &v)
{
    int size = v.size();
    bool flag = true;
    int idx = 0;
    int swapCount = 0;
    while (flag) {
        flag = false;
        for (int i = size - 1; i >= idx + 1; --i) {
            if (v[i] < v[i-1]) {
                int tmp = v[i];
                v[i] = v[i-1];
                v[i-1] = tmp;
                ++swapCount;
            }
            flag = true;
        }
        ++idx;
    }
    return swapCount;
}

int main(void)
{
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }
    int cnt = sort(v);
    for (int i = 0; i < n; ++i) {
        std::cout << (i ? " " : "") << v[i];
    }
    std::cout << std::endl;
    std::cout << cnt << std::endl;
    return 0;
}