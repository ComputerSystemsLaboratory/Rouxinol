#include <iostream>
using namespace std;
const static int n = 30;

int main() {
    bool students[n]; for (int j = 0; j < n; j++) students[j] = false;
    for (int i = 0; i < n - 2; i++) {
        int tmp; cin >> tmp;
        students[tmp - 1] = true;
    }

    for (int j = 0; j < n; j++)
        if (students[j] == false) cout << j + 1 << endl;
}
