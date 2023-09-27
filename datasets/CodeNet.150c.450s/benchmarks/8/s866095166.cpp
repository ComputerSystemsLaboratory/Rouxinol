#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main () {
    // input
    int num_cards = 0;
    cin >> num_cards;
    
    string str_taro, str_hanako;
    int points_taro = 0;
    int points_hanako = 0;
    for (int i=0; i<num_cards; i++) {
        cin >> str_taro >> str_hanako;

        // think
        if (str_taro > str_hanako) {
            points_taro += 3;
        } else if (str_taro < str_hanako) {
            points_hanako += 3;
        } else {
            points_taro += 1;
            points_hanako += 1;
        }
    }

    // output
    cout
        << points_taro
        << " "
        << points_hanako << endl;
}
