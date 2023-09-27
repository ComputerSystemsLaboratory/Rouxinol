#include <iostream>
#include <memory>
#include <limits>
#include <numeric>
#include <string>
#include <sstream>

std::unique_ptr<int[]> add_sentinel(int const* arr, const int n)
{
    auto ret = std::make_unique<int[]>(n + 1);
    std::copy(arr, arr + n, ret.get());

    static const int sentinel = std::numeric_limits<int>::max();
    ret[n] = sentinel;

    return ret;
}

int merge(int* arr, const int n)
{
    const auto m = n >> 1;
    const auto array0 = add_sentinel(arr, m);
    const auto array1 = add_sentinel(arr + m, n - m);
    int i0 = 0;
    int i1 = 0;
    for (int i = 0; i < n; ++i) {
        arr[i] = array0[i0] < array1[i1] ? array0[i0++] : array1[i1++];
    }
    return n;
}

int merge_sort(int* arr, const int n) 
{
    static int count = 0;
    if (n > 1) {
        const auto m = n >> 1;
        merge_sort(arr, m);
        merge_sort(arr + m, n - m);
        count += merge(arr, n);
    }
    return count;
}

void print(int* arr, const int n, const int i)
{
    if (i == n - 1) {
        std::cout << arr[i] << std::endl;
        return;
    }
    std::cout << arr[i] << " ";
    
    return print(arr, n, i + 1);
}


void print(int* arr, const int n)
{
    print(arr, n, 0);
    return;
}

int main()
{
    int n;
    {
        std::string buf;
        std::getline(std::cin, buf);
        n = std::stoi(buf);
    }

    int arr[500000];
    {
        std::string buf;
        std::getline(std::cin, buf);
        std::stringstream stream;
        stream << buf;
        for (int i = 0; std::getline(stream, buf, ' '); ++i) {
            arr[i] = std::stoi(buf);
        }

    }

    const int count = merge_sort(arr, n);
    print(arr, n);
    std::cout << count << std::endl;

    return 0;
}