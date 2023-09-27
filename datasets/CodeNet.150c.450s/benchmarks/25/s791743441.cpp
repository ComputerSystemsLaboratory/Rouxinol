#include <iostream>
#include <string>

using namespace std;

int main () {
    // input
    char ch;
    int arr[1200] = {0};
    while (cin >> ch) {
        arr[tolower(ch) - 'a'] += 1;
    }

    // output
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for (int i=0; i<26; i++) {
        cout
            << alphabet[i]
            << " : "
            << arr[i]
            << endl;
    }
}
