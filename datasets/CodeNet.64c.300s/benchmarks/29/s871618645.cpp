#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void) {
    int e;
    int temp_e;
    int min;
    while (1) {
        std::cin >> e;
        if (e == 0) {
            break;
        }
        min = 1e09;
        for (int z = 100; z >= 0; z--) {
            temp_e = e;
            int z_3 = z * z * z;
            if (z_3 > temp_e) {
                continue; 
            } else {
                temp_e -= z_3;
            }

            for (int y = 1000; y >= 0; y--) {
                temp_e = e - z_3;;
                int y_2 = y * y;
                if (y_2 > temp_e) {
                    continue; 
                } else {
                    temp_e -= y_2;
                }
                int x = temp_e;
                if (x + y + z < min) {
                    min = x + y + z; 
                }
            }
        }
        cout << min << endl;
    }
    return 0;
}