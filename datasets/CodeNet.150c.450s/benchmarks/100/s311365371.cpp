#include <iostream>
#include <cstdio>

using namespace std;

long long fact (int n)
{
    if (n == 0)
        return 1;
    else
        return n*(fact(n-1));
}

int main()
{
    int n;
    cin >> n;
    long long result = fact(n);
    cout << result << endl;
    return 0;
}