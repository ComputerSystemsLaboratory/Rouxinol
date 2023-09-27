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
    int n;
    int count = 0;

    cin >> n;
    for (int x; n-- && cin >> x;)
        inputs.push_back(x);

    sieve(*max_element(inputs.begin(), inputs.end()), primes);

    for (int x: inputs)
        if (binary_search(primes.begin(), primes.end(), x))
            count++;

    cout << count << endl;

    return 0;
}