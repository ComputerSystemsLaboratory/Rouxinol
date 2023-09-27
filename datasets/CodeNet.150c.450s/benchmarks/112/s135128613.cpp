#include <iostream>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        char* before = new char [n + 1];
        char* after = new char [n + 1];
        for (int i = 0; i < n; i++) {
            cin >> before[i] >> after[i];
        }
        int m;
        cin >> m;
        for (int i = 0; i < m; i++) {
            char input;
            cin >> input;
            for (int j = 0; j < n; j++) {
                if (input == before[j]) {
                    input = after[j];
                    break;
                }
            }
            cout << input;
        }
        cout << endl;
        delete[] before;
        delete[] after;
    }
}