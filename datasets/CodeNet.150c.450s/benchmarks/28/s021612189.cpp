#include <iostream>
#include <string>
#include <sstream>
#include <memory>

int max_num(const int n, const int k, int const* w, const int p) 
{
    int j = 0;
    int track = p;
    int i = 0;
    for (; i < n;) {
        if (track >= w[i]) {
            track -= w[i];
            ++i;
        }
        else {
            ++j;
            track = p;
            if (j == k) {
                break;
            }
        }
    }

    return i;
}

int half(int n) 
{
    return n >> 1;
}

int solve(const int n, const int k, int const* w, const int l, const int r)
{
    const int m = half(l + r);
    if (l == m) {
        return r;
    }
    enum class Pos {
        Left,
        Right
    };
    const Pos p = max_num(n, k, w, m) < n ? Pos::Right : Pos::Left;
    return solve(
        n,
        k,
        w,
        p == Pos::Left ? l : m,
        p == Pos::Right ? r : m);
}


int solve(const int n, const int k, int const* w) 
{
    return solve(n, k, w, 0, 10000 * 100000);
}

void split(int* ret, const std::string& data)
{
    std::stringstream stream;
    stream << data;
    std::string buf;
    for (int i = 0; getline(stream, buf, ' '); ++i) {
        ret[i] = std::stoi(buf);
    }
    return;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int tmp[2];
    {
        std::string buf;
        getline(std::cin, buf);
        split(tmp, buf);
    }
    const int n = tmp[0];
    const int k = tmp[1];

    int w[100000];
    for (int i = 0; i < n; ++i) {
        std::cin >> w[i];
        std::cin.ignore();
    }

    std::cout << solve(n, k, w) << std::endl;

    return 0;
}