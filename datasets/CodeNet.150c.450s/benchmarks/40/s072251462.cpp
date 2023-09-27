#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <cmath>
#include <iomanip>

int main(){
    std::vector<int> v(6);
    for (int i = 0; i < 6; i++) {
        std::cin >> v[i];
    }

    std::string s;

    std::cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'E') {
            char tmp = v[0];
            v[0] = v[3];
            v[3] = v[5];
            v[5] = v[2];
            v[2] = tmp;
        } else if (s[i] == 'S') {
            char tmp = v[0];
            v[0] = v[4];
            v[4] = v[5];
            v[5] = v[1];
            v[1] = tmp;
        } else if (s[i] == 'N') {
            char tmp = v[0];
            v[0] = v[1];
            v[1] = v[5];
            v[5] = v[4];
            v[4] = tmp;
        } else {
            char tmp = v[0];
            v[0] = v[2];
            v[2] = v[5];
            v[5] = v[3];
            v[3] = tmp;
        }
    }

    std::cout << v[0] << std::endl;

    return 0;
}