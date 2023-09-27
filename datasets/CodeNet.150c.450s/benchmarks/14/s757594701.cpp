#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            cout << " " << i;
            continue;
        }
        
        for (int x = i; x > 0; x /= 10) {
            if (x % 10 == 3) {
                cout << " " << i;
                break;
            }
        }
    }

    cout << endl;
}