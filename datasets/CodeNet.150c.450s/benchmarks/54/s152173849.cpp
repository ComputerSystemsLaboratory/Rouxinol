#include <iostream>
using namespace std;
#include <string>
#include <cctype>

int main() {
    string W, S;
    int num = 0;
    cin >> W;
    while (1) {
        cin >> S;
        if (S == "END_OF_TEXT") break;
        else {
            for (int i = 0; i < S.size(); i++){
                S[i] = tolower(S[i]);
            }
            if (W == S) num++;
        };

    }

    cout << num << endl;

    return 0;
}