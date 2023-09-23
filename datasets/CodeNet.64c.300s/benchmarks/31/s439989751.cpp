#include <iostream>
#include <cstring>

using namespace std;

int main() {
    bool st[30];

    for (int i = 0; i < 30; i++) st[i] = false;

    for (int i = 0; i < 28; i++) {
        int n;
        cin >> n;
        st[n-1] = true;
    }

    for (int i = 0; i < 30; i++) {
        if (!st[i]) cout << i+1 << endl;
    }

    return 0;
}