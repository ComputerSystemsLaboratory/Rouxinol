#include <iostream>
#include <array>

int main() {
    std::array<int, 4> a, b;

    while (std::cin >> a[0] >> a[1] >> a[2] >> a[3] 
                    >>b[0] >> b[1] >> b[2] >> b[3]) {
        int cnt_hits = 0, cnt_blows = 0;
        
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                if (a[i] == b[j]) {
                    i != j ? ++cnt_blows : ++cnt_hits;
                }
            }
        }

        std::cout << cnt_hits << " " << cnt_blows << std::endl;
    }

    return 0;
}