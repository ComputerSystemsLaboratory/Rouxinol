#include <bits/stdc++.h>

using namespace std;

#define MAX 1000000

int main()
{
    vector<int> p;
    bool prime[MAX];
    fill(prime, prime + MAX, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i < MAX; i++) {
        if (prime[i]) {
            p.push_back(i);
            for (int j = 2*i; j < MAX; j += i) {
                prime[j] = 0;
            }
        }
    }

    int N;
    while (cin >> N) {
        cout << upper_bound(p.begin(), p.end(), N) - p.begin() << endl;
    }
    return 0;
}