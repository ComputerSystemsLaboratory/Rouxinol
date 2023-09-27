#include <iostream>
using namespace std;

int main() {
    int w, n;
    cin >> w >> n;

    int *progression = new int[w + 1];
    for (int i = 1; i <= w; ++i) {
        progression[i] = i;
    }

    for (int i = 0; i < n; ++i) {
        int a, b;
        char comma;
        cin >> a >> comma >> b;

        int tmp = progression[a];
        progression[a] = progression[b];
        progression[b] = tmp;
    }

    for (int i = 1; i <= w; ++i) {
        cout << progression[i] << endl;
    }

    delete[] progression;
}