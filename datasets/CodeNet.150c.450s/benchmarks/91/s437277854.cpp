// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0009
// for ref

#include <iostream>
#include <cstring>
#include <cmath>
#define Rep(i, b, e)\
    for (int i = (int)b; i < (int)e; i++)

using namespace std;

const int MAXN = 999999;
bool isPrime[MAXN];

int countPrime(int n) {
    memset(isPrime, true, sizeof isPrime);
    Rep(i, 0, 1000)
        isPrime[i] = true;

    isPrime[0] = false;
    isPrime[1] = false;
    // isPrime[2] = true;
    // isPrime[3] = true;

    // Rep(i, 2, sqrt(n)+1) {
        //Rep (k, 2, sqrt(n)+1) {
    Rep(i, 2, n) {
        Rep(k, 2, n) {
            if (i*k > n)
                break;
            isPrime[i*k] = false;
        }
    }

    int primeCount = 0;
    int j = 0;
    // while (primeCount < n) {     // GS q
    while (j <= n) {
        if (isPrime[j]) {
            // cout << primeCount << " th prime\t";
            // cout << j << endl;
            primeCount++;
        }
        j++;
    }

    return primeCount;
}

int num;

int main()
{
    while (cin >> num) {
        cout << countPrime(num) << endl;
    }
 //   cout << "Hello world!" << endl;
    return 0;
}