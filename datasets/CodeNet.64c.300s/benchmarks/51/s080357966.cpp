#include<iostream>
using namespace std;

long long kaijo(long long n);

int main()
{
    long long a;
    cin >> a;
    cout << kaijo(a) << endl;
    return 0;
}

long long kaijo(long long n)
{
    return (n==1) ? 1 : n*kaijo(n-1);
}