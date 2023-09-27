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
#define mod 1000000007
#include<numeric>
using namespace std;
int gcd(int a, int b)
{
	if (a % b == 0)	return(b);
	else return(gcd(b, a % b));
}
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}
ll pow(ll a, ll b) {
	ll k = b % 30000, h = b / 30000, s = 1;
	rip(i, 30000)s = (s * a) % mod; ll j = 1;
	if (h != 0)rip(i, h)j = j * s % mod;
	if (k != 0)rip(i, k)j = j * a % mod;
	return(j);
}
int main() {
	ll a, b, c;
	cin >> a  >> b >> c;
	if (a < b && b < c)cout << "Yes" << endl;
	else cout << "No" << endl;
}
