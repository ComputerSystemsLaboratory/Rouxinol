#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    for (int i = 0; i < n; i++) {
        string c;
        cin >> c;
        if (c == "AC") {
            c0++;
        }
        else if (c == "WA") {
            c1++;
        }
        else if (c == "TLE") {
            c2++;
        }
        else {
            c3++;
        }
    }
    cout << "AC x " + to_string(c0) << endl;
    cout << "WA x " + to_string(c1) << endl;
    cout << "TLE x " + to_string(c2) << endl;
    cout << "RE x " + to_string(c3) << endl;
    return 0;
}