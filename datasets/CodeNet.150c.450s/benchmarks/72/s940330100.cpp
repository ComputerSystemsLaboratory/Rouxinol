#include <iostream>
using namespace std;

// In ASCII, the upper case begin with num in 65,
// while the lower case begin with 97.

int main() {
    //freopen("in.txt", "r", stdin);

    char tmp, a[1201] = {'0'};
    int len = 0;

    while ((tmp = getchar()) != '\n' && tmp != -1) {
        if (tmp >= 65 && tmp <= 90) {  // is upper case
            a[len++] = (char) tmp + 32;
        } else if (tmp >= 97 && tmp <= 122) {  // is lower case
            a[len++] = (char) tmp - 32;
        } else {
            a[len++] = (char) tmp;
        }
    }
    for (int i = 0; i < len; ++i) {
        cout << a[i];
    }
    cout << endl;
}