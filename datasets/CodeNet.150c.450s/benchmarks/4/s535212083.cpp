#include <iostream>
int main() {
    int m, f, r;
    for (std::cin >> m >> f >> r;
         m != -1 || f != -1 || r != -1;
         std::cin >> m >> f >> r) {
        int s = m + f;
        std::cout <<
            (
             (m == -1 || f == -1) ? 'F' :
             (s >= 80) ? 'A' :
             (s >= 65) ? 'B' :
             (s >= 50) ? 'C' :
             (s >= 30) ? ((r >= 50) ? 'C' : 'D') :
             'F'
            )
            << std::endl;
    }
}

