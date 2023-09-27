#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int taro = 0;
    int hanako = 0;

    for (int i = 0; i < n; i++) {
        string t,h;
        cin >> t >> h;
        int comp = t.compare(h);
        if (comp > 0) {
            taro += 3;
        } else if (comp < 0) {
            hanako += 3;
        } else {
            taro += 1;
            hanako += 1;
        }
    }
    cout << taro << " " << hanako << endl;
    return 0;
}