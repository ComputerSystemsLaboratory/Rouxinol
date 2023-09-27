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
#include<numeric>
using namespace std;
int main() {
	int n;
	cin >> n;
	cout << n << ":";
	int i = 2;
	int k = n;
	while (n != 1) {
		if (i > sqrt(k)) {
			cout << " " << n << endl;
			break;
		}
		if (n % i == 0) {
			cout << " " << i;
			n = n / i;
			if(n==1)cout << endl;
			i--;
		}
		i++;
	}
}
