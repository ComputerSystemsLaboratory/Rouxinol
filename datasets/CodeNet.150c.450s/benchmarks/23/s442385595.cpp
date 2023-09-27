#include <bits/stdc++.h>
#define N 45
using namespace std;

int main(void) {
    int i,n;
    vector<int> F(N);
    cin >> n;
    F.resize(n);
    F[0] = 1;
    F[1] = 1;
    for(i=2;i<=n;i++){
        F[i] = F[i-2] + F[i-1];
    }
    cout << F[n] << endl;
    return 0;
}