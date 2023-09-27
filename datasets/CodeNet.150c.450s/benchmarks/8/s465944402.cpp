#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, score1, score2;
    string s1, s2;
    score1 = score2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s1 >> s2;
        if (s1 > s2) {
            score1 += 3;
        } else if (s1 < s2) {
            score2 += 3;
        } else {
            score1 += 1;
            score2 += 1;
        }
    }
    cout << score1 << " " << score2 << endl;
    return 0;
}
