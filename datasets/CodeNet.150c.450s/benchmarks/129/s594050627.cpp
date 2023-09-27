#include<iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int xs[c];
    for (int i = 0; i <= c; i++) xs[i] = 0;
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            int x;
            cin >> x;
            cout << x << ' ';
            sum += x;
            xs[j] += x;
        }
        cout << sum << endl;
        xs[c] += sum;
    }
    for (int i = 0; i < c; i++) {
        cout << xs[i] << ' ';
    }
    cout << xs[c] << endl;
}