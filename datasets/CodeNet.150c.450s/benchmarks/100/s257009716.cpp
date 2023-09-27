#include <iostream>
using namespace std;

unsigned long long fac(unsigned long long n)
{
    return n == 1 ? 1 : n * fac(n-1);
}

int main()
{
    unsigned long long n;
    cin >> n;
    cout << fac(n) << endl;
    return 0;
}