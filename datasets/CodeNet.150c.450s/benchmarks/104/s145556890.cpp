#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int w, n, h[31][2], v[31], pos;
    cin >> w >> n;

    for (int i = 0; i < n; i++) {
        scanf("%d, %d", &h[i][0], &h[i][1]);
    }
    for (int i = 1; i <= w; i++) {
        pos = i;
        for (int j = 0; j < n; j++) {
            if (pos == h[j][0]) {
                pos = h[j][1];
            }
            else if (pos == h[j][1]) {
                pos = h[j][0];
            }
        }
        v[pos] = i;
    }
    for (int i = 1; i <= w; i++) {
        cout << v[i] << endl;
    }
    
    return 0;
}