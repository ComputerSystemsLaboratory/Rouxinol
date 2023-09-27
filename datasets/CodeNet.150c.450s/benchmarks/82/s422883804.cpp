#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <cmath>
#include <iomanip>

void roll(std::vector<int> &v, char c) {
    if (c == 'E') {
        char tmp = v[0];
        v[0] = v[3];
        v[3] = v[5];
        v[5] = v[2];
        v[2] = tmp;
    } else if (c == 'S') {
        char tmp = v[0];
        v[0] = v[4];
        v[4] = v[5];
        v[5] = v[1];
        v[1] = tmp;
    } else if (c == 'N') {
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

int main(){
    std::vector<int> v(6);
    for (int i = 0; i < 6; i++) {
        std::cin >> v[i];
    }

    int n;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int top, front;
        std::cin >> top >> front;

        if(v[1] != front) {
            if (v[4] == front) roll(v, 'N');
            while (v[0] != front) {
                roll(v, 'E');
            }
            roll(v, 'S');
        }
        while (v[0] != top) roll(v, 'E');
        std::cout << v[2] << std::endl;
    }

    return 0;
}