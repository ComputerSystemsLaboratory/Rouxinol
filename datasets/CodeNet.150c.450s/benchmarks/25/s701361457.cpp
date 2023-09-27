#include <iostream>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);

    int a[27][1] = {0};
    char tmp;

    for (int i = 0; i < 26; ++i) {
        a[i][1] = 0;
    }

    while ((tmp = getchar()) != EOF) {
        if (tmp >= 65 && tmp <= 90) {
            a[tmp - 65][1]++;
        } else if (tmp >= 97 && tmp <= 122) {
            a[tmp - 97][1]++;
        } else {
            // do nothing
        }
    }
    for (int i = 0; i < 26; ++i) {
        cout << (char) (i + 97) << " : " << a[i][1] << endl;
    }
}