#define ll long long int

#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;
    map<ll, int> mp;

    for (int x = 1; x * x <= N; x++) {

        for (int y = 1; y * y <= N - (x * x); y++) {

            for (int z = 1; z * z <= N - ((x * x) + (y * y)); z++) {

                mp[((x * x) + (y * y) + (z * z) + (x * y) + (y * z) + (z * x))]++;
            }
        }
    }
    for (int i = 1; i <= N; i++)cout << mp[i] << endl;


    return 0;
}