#include <iostream>
#include <string>

using namespace std;

int main() {
    int32_t n, point_taro = 0, point_hanako = 0;
    string card_taro, card_hanako;

    cin >> n;

    for (int32_t i = 0; i < n; i++) {
        cin >> card_taro >> card_hanako;

        if (card_taro < card_hanako) {
            point_hanako += 3;
        } else if (card_taro > card_hanako) {
            point_taro += 3;
        } else {
            point_taro++;
            point_hanako++;
        }
    }

    cout << point_taro << " " << point_hanako << endl;

    return 0;
}