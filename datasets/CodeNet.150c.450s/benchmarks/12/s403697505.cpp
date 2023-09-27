#include <iostream>

using namespace std;
typedef long long ll;

ll H[300];

int main() {
    int h;
    cin >> h;
    for (int i = 1; i <=h; i++) {
        cin >> H[i];
    }

    for (int i = 1; i <=h; i++) {
        cout << "node " << i << ": "
            << "key = " << H[i] << ", ";
        if (i/2 > 0)
            cout << "parent key = " << H[i / 2] << ", ";
        if (i * 2 <= h)
            cout << "left key = " << H[i * 2] << ", ";
        if (i * 2 + 1<= h)
            cout << "right key = " << H[i * 2 + 1] << ", ";
        cout << '\n';
    }
}


