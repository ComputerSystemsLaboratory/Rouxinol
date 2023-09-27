#include <iostream>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int i = 0;
    int x;
    while(cin >> x && x != 0)
        cout << "Case " << ++i << ": " << x << "\n";
}