#include <iostream>
#include <vector>

int partition(std::vector<int> &v, int left, int right)
{
    int pivot = v[right];
    int index = left - 1;
    int tmp;

    for (int i = left; i < right; i++) {
        if (v[i] <= pivot) {
            index++;
            tmp = v[i];
            v[i] = v[index];
            v[index] = tmp;
        }
    }

    tmp = v[index + 1];
    v[index + 1] = v[right];
    v[right] = tmp;

    return index + 1;

}

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    int pivot = partition(v, 0, n - 1);

    for (int i = 0; i < n - 1; i++) {
        if (i == pivot)
            std::cout << "[" << v[i] << "]" << " ";
        else
            std::cout << v[i] << " ";
    }
    if (pivot == n - 1)
        std::cout << "[" << v[n - 1] << "]" << std::endl;
    else
        std::cout << v[n - 1] << std::endl;

    return 0;
}