#include <iostream>
#include <vector>

void countingsort(std::vector<int> &v, std::vector<int> &res)
{
    const int maxint = 10000;
    std::vector<int> counter(maxint, 0);

    for (int i = 0; i < v.size(); i++) {
        counter[v[i]]++;
    }

    for (int i = 1; i < maxint; i++) {
        counter[i] += counter[i-1];
    }

    for (int i = v.size() - 1; i >= 0; i--) {
        res[counter[v[i]]] = v[i];
        counter[v[i]]--;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::vector<int> res(n+1);
    countingsort(v, res);

    for (int i = 1; i < n; i++) {
        std::cout << res[i] << " ";
    }
    std::cout << res[n] << std::endl;

    return 0;
}