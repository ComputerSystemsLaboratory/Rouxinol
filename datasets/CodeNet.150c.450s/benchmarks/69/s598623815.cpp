#include <iostream>
using namespace std;

int balls[10];
bool drop(int pos, int left, int right) {
    if (pos == 10) return true;
    return balls[pos] > left && drop(pos+1, balls[pos], right) || balls[pos] > right && drop(pos+1, left, balls[pos]);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 10; ++j) 
            cin >> balls[j];
        if (drop(0, 0, 0)) 
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
