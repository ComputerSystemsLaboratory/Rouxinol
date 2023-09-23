#include <iostream>

using namespace std;

int main()
{
    long long fact[21] = {};
    fact[0] = 1;
    int a; cin >> a;
    for (int i = 1; i <= a; ++i) fact[i] = i * fact[i - 1];
    cout << fact[a] << endl;
}