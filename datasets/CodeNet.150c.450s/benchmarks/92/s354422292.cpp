#include <iostream>
using namespace std;

int main() {
    int a, b;
    while(cin >> a >> b) {
        a += b;
        int ans;
        for(ans=0; a != 0; ++ans) {
            a /= 10;
        }
        cout << ans << endl;
    }
}