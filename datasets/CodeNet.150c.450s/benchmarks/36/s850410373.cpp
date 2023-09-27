#include<iostream>

using namespace std;
int main() {
    int d;
    while(cin >> d) {
        long long ans = 0;
        int y = d;
        while (y <= 600 - d) {
            ans += (long long)y * y * d;
            y += d;
        }
        cout << ans << endl;
    }
}
