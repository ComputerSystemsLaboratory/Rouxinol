#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void sieve(int n, vector<bool> &primes)
{
    primes = vector<bool> (n / 2 + 1, true);

    // check
    for (int i = 3, end = sqrt(n); i <= end; i += 2) {
        if (!primes[i / 2])
            continue;
        for (int j = i * i / 2; j <= n / 2; j += i)
            primes[j] = false;
    }
}

int main()
{
    vector<bool> primes;
    vector<int> inputs;
    int n;
    int count = 0;

    cin >> n;
    for (int x; n-- && cin >> x;)
        inputs.push_back(x);

    sieve(*max_element(inputs.begin(), inputs.end()), primes);

    for (int x: inputs)
        if (x == 2 || x % 2 && primes[x / 2])
            count++;

    cout << count << endl;

    return 0;
}