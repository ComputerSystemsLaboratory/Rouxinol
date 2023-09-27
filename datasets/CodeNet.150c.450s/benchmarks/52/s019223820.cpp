// 車両入れ替え

#include <iostream>
using namespace std;

int main() {
    int pos = -1;
    int input;
    int senro[100];

    while (cin >> input) {
        if (input != 0) {
            pos++;
            senro[pos] = input;
        } else if (input == 0) {
            if (pos >= 0) {
                cout << senro[pos] << "\n";
                pos--;
            } else {
                cout << "error???" << "\n";
                return 1;
            }
        }
    }
    return 0;
}
