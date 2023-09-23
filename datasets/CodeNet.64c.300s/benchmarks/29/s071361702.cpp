#include<iostream>

int main(void) {
    int e = 0;
    while(std::cin >> e) {
        int result = 1000000;
        if(e == 0) {
            break;
        }
        for(int z = 0; z <= 100; z++) {
            const int Z = z*z*z;
            if(Z > e) {
                break;
            }
            for(int y = 0; y <= 1000; y++) {
                const int Y = y*y;
                if(Z + Y > e) {
                    break;
                }
                int x = e - Z - Y;
                result = std::min(result, x + y + z);
            }
        }
        std::cout << result << std::endl;
    }
    return 0;
}