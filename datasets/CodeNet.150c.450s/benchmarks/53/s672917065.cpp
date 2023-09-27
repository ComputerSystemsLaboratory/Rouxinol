#include <iostream>
#include <sstream>
#include <string>

int main()
{
    unsigned int n;
    std::stringstream ss;
    std::cin >> n;
    ss << n << ": ";
    for(unsigned int i = 2; i * i <= n; i++) {
        if(!(n % i)) {
            n /= i;
            ss << i << " ";
            i = 1;
        }
    }
    if(n != 1)
        ss << n << " ";

    std::string s = ss.str();
    std::cout << s.substr(0, s.size() - 1) << std::endl;

    return 0;
}