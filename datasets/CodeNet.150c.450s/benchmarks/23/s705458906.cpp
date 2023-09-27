#include <iostream>
#include <map>
using namespace std;

int fib(int n, map<int, int>& fib_mp)
{
    auto itr = fib_mp.find(n);
    if (fib_mp.end() != itr) return itr->second;
    return fib_mp[n] = fib(n - 1, fib_mp) + fib(n - 2, fib_mp);
}

int main()
{
    int n;
    cin >> n;
    map<int, int> fib_mp;
    fib_mp[0] = fib_mp[1] = 1;
    cout << fib(n, fib_mp) << endl;
    return 0;
}