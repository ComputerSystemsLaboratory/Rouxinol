#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = n; i > 0; i--) {
        cout << arr[i -1];
        if (i != 1) cout << " ";
    }

    cout << endl;
}