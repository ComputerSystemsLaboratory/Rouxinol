#include <iostream>
#include <string>
int main() {
    std::string s, p, m = "Yes";
    std::cin >> s >> p;
    s += s;
    std::string::size_type i = s.find(p);
    if (i == std::string::npos) {
        m = "No";
    }
    std::cout << m << std::endl;
}

