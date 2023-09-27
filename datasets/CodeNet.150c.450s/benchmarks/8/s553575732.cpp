#include <iostream>
#include <string>
using namespace std;

int main () {
    int n;
    string card_taro, card_hanako;

    int p_taro = 0, p_hanako = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> card_taro >> card_hanako;
        if ( card_taro > card_hanako ) {
            p_taro += 3;
        } else if ( card_taro < card_hanako ) {
            p_hanako += 3;
        } else if ( card_taro == card_hanako ) {
            p_taro++;
            p_hanako++;
        }
    }
    cout << p_taro << " " << p_hanako << endl;

    return 0;
}