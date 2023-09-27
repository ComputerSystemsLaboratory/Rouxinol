#include<iostream>
using namespace std;

int main() {
    int i = 1;
    int x;
    cin >> x;
    for (int i = 1; x != 0; i++) {
        cout << "Case " << i << ": " << x << "\n";
        cin >> x;
    }
    cout << flush;
    return 0;
}