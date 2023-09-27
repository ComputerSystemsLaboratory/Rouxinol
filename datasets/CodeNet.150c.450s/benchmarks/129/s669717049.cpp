#include <iostream>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int r, c;
    cin >> r >> c;
    int* tc;
    tc = new int[c];
    for (int i = 0; i < r; i++)
        tc[i] = 0;
    int t;
    int v;
    for (int i = 0; i < r; i++) {
        t = 0;
        for (int j = 0; j < c; j++) {
            cin >> v;
            t += v;
            tc[j] += v;
            cout << v << " ";
        }
        cout << t << "\n";
    }
    t = 0;
    for (int i = 0; i < c; i++) {
        t += tc[i];
        cout << tc[i] << " ";
    }
    cout << t << "\n";
}