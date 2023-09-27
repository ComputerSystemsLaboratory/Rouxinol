#include<iostream>

using namespace std;

int main () {

    string W;

    cin >> W;

    int cnt = 0;
    while (1) {
        string T; 
        cin >> T;

        if (T == "END_OF_TEXT") {
            break;
        }

        for (int i = 0; ; i++) {

            if (T[i] == 0) {
                break;
            }

            if ('A' <= T[i] && T[i] <= 'Z') {
                T[i] += 32;
            }
        }

        if (T == W) {
            cnt++;
            // cout << "count++" << endl;
        }
    }

    cout << cnt << endl;

    return 0;

}
