#include <iostream>
using namespace std;

int main() {
    int n;
    int a[100];
    cin >> n;
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=n-1;0<=i;i--) {
        cout << a[i];
        if (i != 0) cout << " ";
    }
    cout << "\n";
    return 0;
}