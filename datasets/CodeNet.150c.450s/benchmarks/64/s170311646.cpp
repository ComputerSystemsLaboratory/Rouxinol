#include <iostream>
#include <string>
#include <sstream>

bool solve(
    int* const a,
    const int n,
    const int i,
    const int m)
{
    if (m < 0) {
        return false;
    }
    if (m == 0) {
        return true;
    }
    if (i == n) {
        return false;
    }

    return solve(a, n, i + 1, m)
        || solve(a, n, i + 1, m - a[i]);
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;
    std::cin.ignore();

    int a[20];
    {
        std::string buf;
        std::getline(std::cin, buf);
        std::stringstream stream;
        stream << buf;
        for (int i = 0; std::getline(stream, buf, ' '); ++i) {
            a[i] = std::stoi(buf);
        }
    }

    int q;
    std::cin >> q;
    std::cin.ignore();

    int m[200];
    {
        std::string buf;
        std::getline(std::cin, buf);
        std::stringstream stream;
        stream << buf;
        for (int i = 0; std::getline(stream, buf, ' '); ++i) {
            m[i] = std::stoi(buf);
        }
    }

    std::stringstream ret;
    for (int i = 0; i < q; ++i) {
        ret << (solve(a, n, 0, m[i]) ? "yes" : "no") << std::endl;
    }

    std::cout << ret.str();

    return 0;
}