#include<iostream>
#include<cstring>
#include<string>
using namespace std;

void upper(string &s) {
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i]) && islower(s[i])) s[i] = toupper(s[i]);
    }
}

int main() {
    string W, T;
    cin >> W;
    upper(W);
    int sum = 0;
    while (true) {
        cin >> T;
        if (T == "END_OF_TEXT") break;
        upper(T);
        if (T == W) sum += 1;
    }
    cout << sum << endl;
}