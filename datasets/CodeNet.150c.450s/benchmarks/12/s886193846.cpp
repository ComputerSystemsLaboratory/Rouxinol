#include <iostream>


using namespace std;


using ll = long long;


int main()
{
    ll H;
    ll A[250 + 1];
    cin >> H;

    for (ll i = 1; i <= H; i++) {
        cin >> A[i];
    }

    for (ll i = 1; i <= H; i++) {
        cout << "node " << i << ": key = " << A[i] << ", ";
        if (i / 2 >= 1) {
            cout << "parent key = " << A[i / 2] << ", ";
        }
        if (i * 2 <= H) {
            cout << "left key = " << A[i * 2] << ", ";
        }
        if (i * 2 + 1 <= H) {
            cout << "right key = " << A[i * 2 + 1] << ", ";
        }
        cout << endl;
    }
}

