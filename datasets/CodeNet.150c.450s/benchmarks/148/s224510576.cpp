#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < N; i++)
#define rep2(i, x, n) for (int i = x; i < N; i++)
using ll = long long int;
int main() {
    int N;
    cin >> N;
    int A=0, W=0, T=0, R=0;
    rep(i, N) {
        string S;
        cin >> S;
        if (S=="AC") A++;
        else if (S=="WA") W++;
        else if (S=="TLE") T++;
        else if (S=="RE") R++;
    }
    cout << "AC x " << A << endl;
    cout << "WA x " << W << endl;
    cout << "TLE x " << T << endl;
    cout << "RE x " << R << endl;
    return 0;
}