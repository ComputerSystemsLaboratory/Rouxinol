#include <iostream>
#include <vector>

int sort(std::vector<int> &v)
{
    int swapCount = 0;
    int size = v.size();
    for (int i = 0; i < size; ++i) {
        int minj = i;
        for (int j = i; j < size; ++j) {
            if (v[j] < v[minj]) {
                minj = j;
            }
        }
        if (i != minj) {
            ++swapCount;
            int tmp = v[i];
            v[i] = v[minj];
            v[minj] = tmp;
        }
    }
    return swapCount;
}

int main()
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