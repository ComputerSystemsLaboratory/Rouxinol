#include<iostream>
using namespace std;

int main() {
        int n, x;
        cin >> n;
        for (x = 1; x < 10001; x++) {
                if (x > n) break;
                if (x % 3 == 0) cout << " " << x;
                else if ( x % 10 == 3 ) cout << " " << x;
                else if ( ( x / 10 ) % 10 == 3) cout << " " << x;
                else if ( ( x / 100 ) % 10 == 3) cout << " " << x;
                else if ( ( x / 1000 ) % 10 == 3) cout << " " << x;
        }
        cout << endl;
}