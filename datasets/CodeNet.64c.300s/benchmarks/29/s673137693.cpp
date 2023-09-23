#include <iostream>
using namespace std;

int main() {
    while (true) {
        int e;
        cin >> e;
        if (e == 0) {
            break;
        }
        int result = 1 << 30;
        for (int z = 0; z * z * z <= e; z++) {
            for (int y = 0; y * y <= e - z * z * z; y++) {
                int x = e - y * y - z * z * z;
                if (x + y + z < result) {
                    result = x + y + z;
                }
            }
        }
        cout << result << endl;
    }
}