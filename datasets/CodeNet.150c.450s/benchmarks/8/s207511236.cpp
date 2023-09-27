#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, taroScore, hanakoScore;
    taroScore = hanakoScore = 0;
    cin >> n;

    string taroStr, hanakoStr;
    for (int i = 0; i < n; i++) {
        cin >> taroStr >> hanakoStr;

        if (taroStr > hanakoStr) {
            taroScore += 3;
        }
        else if (taroStr == hanakoStr) {
            taroScore += 1;
            hanakoScore += 1;
        }
        else if (taroStr < hanakoStr) {
            hanakoScore += 3;
        }
    }

    cout << taroScore << ' ' << hanakoScore << endl;

    return 0;
}