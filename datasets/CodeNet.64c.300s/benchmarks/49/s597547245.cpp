#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b;
    char c[10];
    while (cin >> a >> b) {
        sprintf(c, "%d", a+b);
        int i = 0;
        while (c[i] != '\0') {
            ++i;
        }

        cout << i << endl;
    }

    return 0;
}