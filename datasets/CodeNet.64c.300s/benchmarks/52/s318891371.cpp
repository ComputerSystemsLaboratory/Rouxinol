#include <iostream>

int search_combination(int from, int n, int s)
{
    if (n == 1) {
        if (from <= s && s <= 9) return 1;
        else return 0;
    }
    else {
        int cnt = 0;
        for (int i = from; i <= 10 - n; ++i)
            cnt += search_combination(i + 1, n - 1, s - i);
        return cnt;
    }
}

int main()
{
    while (true) {
        int n, s;
        std::cin >> n >> s;
        if (n == 0 && s == 0) break;

        if (s < n * (n - 1) / 2) std::cout << 0 << std::endl;
        else if (n * (19 - n) / 2 < s) std::cout << 0 << std::endl;
        else std::cout << search_combination(0, n, s) << std::endl;
    }
}