#include <iostream>
using namespace std;

int main() {
    for (int i = 1; ; ++i) {
        int j;
        cin >> j;

        if (j == 0) {
            break;
        } else {
            cout << "Case " << i << ": " << j << endl;
        }
    }
    return 0;
}