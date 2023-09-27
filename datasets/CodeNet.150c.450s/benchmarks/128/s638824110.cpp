#include <iostream>

int main()
{
    std::string str, ans;
    int num;
    std::cin >> str;
    num = str.length();
    for (int i = 0; i < num; i++) {
        ans = str[i] + ans;
    }
    std::cout << ans << std::endl;
    return 0;
}