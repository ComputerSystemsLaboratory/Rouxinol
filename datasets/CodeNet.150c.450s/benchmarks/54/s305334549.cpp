#include<iostream>
#include<cctype>
#include<string>

using namespace std;

int main() {
    string W, T;
    cin >> W;
    int sum = 0;
    while (true) {
        cin >> T;
        if (T == "END_OF_TEXT") break;
        for (int i = 0; i < T.size(); i++) {
            if (isupper(T[i])) T[i] = tolower(T[i]);
        }
        if (T == W) sum += 1;
    }
    cout << sum << endl;
    return 0;
}
