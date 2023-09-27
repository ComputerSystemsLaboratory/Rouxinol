#include <algorithm>
#include <string>
#include <iostream>
#include <memory>

constexpr int max_size()
{
    return static_cast<int>(1e+2);
}

void print(int* a, int n, int i) {
    if (i == n - 1) {
        std::cout << a[i] << std::endl;
        return;
    }

    std::cout << a[i] << " ";
    return print(a, n, i + 1);
}

void print(int* a, int n) {
    print(a, n, 0);
    return;
}

void get_array(
    int* arr, 
    const std::string& str,
    int i,  //arr index
    int s,  //start pos
    int e)  //end pos
{
    if (e == str.size()) {
        arr[i] = std::atoi(str.substr(s, e - s).c_str());
        return;
    }

    constexpr char delim = ' ';
    if (str[e] == delim) {
        arr[i] = std::atoi(str.substr(s, e - s).c_str());
        get_array(arr, str, i + 1, e + 1, e + 1);
        return;
    }

    get_array(arr, str, i, s, e + 1);
    return;
}

void get_array(int* arr, std::istream& stream)
{
    std::string buf;
    getline(stream, buf);
    get_array(arr, buf, 0, 0, 0);

    return;
}

int selection_sort(int* a, int n, int i) {
    if (i == n) {
        return 0;
    }

    int m = i;
    for (int k = i + 1; k < n; ++k) {
        if (a[k] < a[m]) {
            m = k;
        }
    }

    int count = 0;
    if (i != m) {
        std::swap(a[i], a[m]);
        count = 1;
    }

    return count + selection_sort(a, n, i + 1);
}

int selection_sort(int* a, int n) {
    return selection_sort(a, n, 0);
}

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore();  //ignore \n
    const auto arr
        = std::make_unique<int[]>(n);
    get_array(arr.get(), std::cin);

    const int count = selection_sort(arr.get(), n);
    print(arr.get(), n);
    std::cout << count << std::endl;

    return 0;
}