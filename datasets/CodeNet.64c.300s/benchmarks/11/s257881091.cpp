#include <iostream>

using namespace std;

int main()
{
    int T, H, M, S;

    cin >> T;

    H = T / 3600;

    M = (T / 60) % 60;

    S = T % 60;

    cout << H << ':' << M << ':' << S << endl;

    return 0;
}