#include <iostream>
#include <utility>
#include <string>
#include <vector>

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

void insert(int* a, int j)
{
    if (j == 0) {
        return;
    }

    if (a[j - 1] < a[j]) {
        return;
    }

    std::swap(a[j - 1], a[j]);
    return insert(a, j - 1);
}

void insertion_sort(int* a, int n, int i)
{
    if (i == n) {
        print(a, n);
        return;
    }

    print(a, n);
    insert(a, i);
    return insertion_sort(a, n, i + 1);
}

void insertion_sort(int* a, int n)
{
    insertion_sort(a, n, 1);
}

std::vector<int>
split(const std::string &s, const char delim) {
    std::vector<int> ret;
    std::string item;
    for (const char ch : s) {
        if (ch == delim) {
            if (!item.empty()) {
                ret.push_back(std::atoi(item.c_str()));
            }
            item.clear();
        }
        else {
            item += ch;
        }
    }
    if (!item.empty()) {
        ret.push_back(std::atoi(item.c_str()));
    }
    return ret;
}

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore();  //ignore \n

    constexpr int N = max_size();
    std::string buf;
    getline(std::cin, buf);

    std::vector<int> a = split(buf, ' ');
    insertion_sort(&a[0], n);

    return 0;
}