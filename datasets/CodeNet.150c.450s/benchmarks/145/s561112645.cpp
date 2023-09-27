#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<std::string, int> m;

    std::string s, max_len_str = "";
    int max_freq = 0;
    while (std::cin >> s) {
        if (max_len_str.size() < s.size()) max_len_str = s;
        ++m[s];
        if (max_freq < m[s]) max_freq = m[s];
    }

    for (std::map<std::string, int>::iterator it = m.begin(); it != m.end(); ++it) {
        if (it->second == max_freq) {
            std::cout << it->first << ' ' << max_len_str << std::endl;
            break;
        }
    }
}