#include <iostream>
int main() {
    int n, t = 0, h = 0;
    std::cin >> n; // skip
    std::string ts, hs;
    while (std::cin >> ts >> hs) {
        if (ts > hs) {
            t += 3;
        } else if (ts < hs) {
            h += 3;
        } else {
            t += 1;
            h += 1;
        }
    }
    std::cout << t << ' ' << h << std::endl;
}

