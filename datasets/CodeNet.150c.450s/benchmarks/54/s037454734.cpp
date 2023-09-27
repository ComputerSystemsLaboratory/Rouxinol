#include <iostream>
#include <string>
using namespace std;

void toLowerCase(string& tar) {
    for (int i = 0; i < tar.length(); ++i) {
        tar[i] = (char) tolower(tar[i]);
    }
}

int main() {
//    freopen("in.txt", "r", stdin);

    string tar, tmp;
    int sum = 0;
    cin >> tar;
    toLowerCase(tar);

    while (1) {
        cin >> tmp;
        if (tmp != "END_OF_TEXT") {
            toLowerCase(tmp);
            if (tmp == tar) {
                ++sum;
            }
        } else {
            cout << sum << endl;
            return 0;
        }
    }
}