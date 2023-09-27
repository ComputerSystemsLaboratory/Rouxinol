#include <iostream>
using namespace std;

bool linearSearch(int s[], int n, int v) {
    for (int i = 0; i < n; i++) {
        if (s[i] == v) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++) cin >> s[i];

    int q;
    cin >> q;
    int t[q];
    for (int i = 0; i < n; i++) cin >> t[i];

    int cnt = 0;
    for (int i = 0; i < q; i++) {
        if (linearSearch(s, n, t[i])) {
            cnt++;
        }
    }

    cout << cnt << endl;
}