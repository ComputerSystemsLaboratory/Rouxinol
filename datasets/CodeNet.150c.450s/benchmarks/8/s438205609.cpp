#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string t, h;
    int tp = 0; int hp = 0;
    for (int i = 0; i < n; i++) {
        cin >> t >> h;
        if (t < h)
            hp += 3;
        else if (t > h)
            tp += 3;
        else {
            tp += 1; hp += 1;
        }
    }
    cout << tp << " " << hp << "\n";
}