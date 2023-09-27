#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i < (int)(n); i++)
using ull = unsigned long long;
using ll = long long;


int main() {
    int N;
    cin >> N;

    vector<int> prime;
    int N2 = N;

    for (int i=2; i*i<=N2; i++) {
        while (N2%i == 0) {
            prime.push_back(i);
            N2 /= i;
        }
    }
    
    if (N2 > 1) prime.push_back(N2);


    cout << N << ":";
    for (auto p : prime) cout << " " << p;
    cout << endl;

    return 0;
}


