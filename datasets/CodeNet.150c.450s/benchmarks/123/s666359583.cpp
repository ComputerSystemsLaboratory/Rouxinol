#include<iostream>
#include<cmath>

using namespace std;

bool PrimeN (int x) {

    if (x == 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(x); i++) {
        
        if (x == i) {
            // cout << x << endl;
            return true;
        }

        if (x % i == 0) {
            return false;
        }
    }

    // cout << x << endl;
    return true;

}

int main (void) {

    int n;
    int cnt = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        
        int X;
        cin >> X;

        if(PrimeN (X)) {
            cnt++;
        }

    }

    cout << cnt << endl;

    return 0;
}
