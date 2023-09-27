#include <iostream>
#include <string>

using namespace std;

int main() {
    int rounds;
    cin >> rounds;
    int pts_taro = 0, pts_hanako = 0;
    for (int r = 0; r < rounds; r++) {
        string taro, hanako;
        cin >> taro >> hanako;

        int compare = taro.compare(hanako);
        if (compare == 0) {
            pts_taro += 1;
            pts_hanako += 1;
        }
        else if (compare < 0) {
            pts_hanako += 3;
        }
        else {
            pts_taro += 3;
        }
    }

    cout << pts_taro << ' ' << pts_hanako << '\n';

    return 0;
}
