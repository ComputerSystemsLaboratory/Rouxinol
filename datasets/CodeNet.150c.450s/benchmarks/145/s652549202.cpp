#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int max_cnt = 0, cnt;
    std::string max_lenght_str = "";
    std::string max_cnt_str = "";
    std::string str;
    std::map<std::string, int> str2cnt;

    while (std::cin >> str) {
        std::transform(str.begin(), str.end(),
                       str.begin(), ::tolower);
        if (str.size() > max_lenght_str.size()) {
            max_lenght_str = str;
        }
        cnt = ++str2cnt[str];

        if (max_cnt < cnt) {
            max_cnt = cnt;
            max_cnt_str = str;
        }
    }

    std::cout << max_cnt_str << " " << max_lenght_str << std::endl;

    return 0;
}