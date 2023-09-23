#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#include<iomanip>
#define rip(i,n) for(int i=0;i<n;i++)
#define ll long long
#define lb long double
#define vec vector<int>
#define set setprecision
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    ll k = n / 10000;
    ll h = n % 10000;
    ll s = 1;
    rip(i, 10000)s = (s * m) % 1000000007;
    ll p = 1;
    if (k != 0)rip(i, k)p = p * s % 1000000007;
    if (h != 0)rip(i, h) p = p * m % 1000000007;
    cout << p << endl;
}
