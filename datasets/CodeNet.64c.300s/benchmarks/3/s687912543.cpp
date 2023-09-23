#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = n-1; i >= 0; i--) {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++) {
        if (i != 0) cout << " ";
        cout << array[i];
    }
    cout << endl;
}