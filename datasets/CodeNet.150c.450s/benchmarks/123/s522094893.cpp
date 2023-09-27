#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void sieve(int n, vector<int> &primes)
{
    vector<bool> v(n / 2 + 1, true);

    // check
    for (int i = 3, end = sqrt(n); i <= end; i += 2) {
        if (!v[i / 2])
            continue;
        for (int j = i * i / 2; j <= n / 2; j += i)
            v[j] = false;
    }

    primes.push_back(2);
    for (int i = 3; i <= n; i += 2)
         if (v[i / 2])
            primes.push_back(i);
}

int main()
{
    vector<int> primes;
    vector<int> inputs;
    int count = 0;

    for (int x; cin >> x;)
        inputs.push_back(x);

    // unique inputs
    sort(inputs.begin(), inputs.end());
    auto it = unique(inputs.begin(), inputs.end());
    inputs.resize(distance(inputs.begin(), it));

    sieve(*max_element(inputs.begin(), inputs.end()), primes);

    for (int x: inputs)
        if (binary_search(primes.begin(), primes.end(), x))
            count++;

    cout << count << endl;

    return 0;
}