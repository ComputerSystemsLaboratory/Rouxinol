#include <iostream>
#include <string>

using namespace std;

int main() {
    int score_taro = 0;
    int score_hanako = 0;

    string s_taro, s_hanako;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s_taro >> s_hanako;
        if (s_taro > s_hanako) score_taro += 3;
        else if (s_taro < s_hanako) score_hanako += 3;
        else {score_taro++; score_hanako++;}
    }
    cout << score_taro << ' ' << score_hanako << endl;
    return 0;
}
