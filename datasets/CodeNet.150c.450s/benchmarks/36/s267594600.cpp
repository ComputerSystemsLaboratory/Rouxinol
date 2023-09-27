#include<iostream>

using namespace std;
int main() {
    int d;
    while(cin >> d) {
        int ans = 0;
        int x = d;
        while (x <= 600 - d) {
            ans += x * x * d;
            x += d;
        }
        cout << ans << endl;
    }
}
