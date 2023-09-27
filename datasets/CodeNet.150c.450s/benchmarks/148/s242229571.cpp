#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define rep(i,n) for(int i = 0; i , (n); ++i)
using ll = long long;
using namespace std;
int sum(int n) {
    if (n == 0) {
        return 0;
    }

    int s = sum(n - 1);
    return s + n;
}
int main() {
    int N;
    string S;
    int A = 0, W = 0, T = 0, R = 0;
    cin >> N;
    for (int i = 0;i < N;i++) {
        cin >> S;
        if (S == "AC") {
            A++;
        }
        if (S == "WA") {
            W++;
        }
        if (S == "TLE") {
            T++;
        }
        if (S == "RE") {
            R++;
        }
    }
    cout << "AC x " << A << endl;
    cout << "WA x " << W << endl;
    cout << "TLE x " << T << endl;
    cout << "RE x " << R << endl;
}
