#include <iostream>
using namespace std;
#define ll long long
ll factorial(ll n){
	if (0 >= n) return 1;
	else return n * factorial(n - 1);
}
int main()
{
	ll n;
	cin >> n;
	cout << factorial(n) << "\n";
	return 0;
}