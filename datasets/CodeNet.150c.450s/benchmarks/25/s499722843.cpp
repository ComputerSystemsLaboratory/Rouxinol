#include <iostream>

using namespace std;

int main() {
    string str, s;
    do {
        getline(cin, s);
        str += s;
    } while (!(s == ""));


    int count[26] = {};

    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < 26; j++) {
            if (str[i] == (char) ('a' + j) || str[i] == (char) ('A' + j)) {
                count[j]++;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << (char) ('a' + i) << " : " << count[i] << "\n";
    }

}