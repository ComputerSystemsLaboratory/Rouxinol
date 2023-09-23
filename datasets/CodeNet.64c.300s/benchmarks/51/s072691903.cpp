#include <iostream>
using namespace std;
int main() {
	long long n,s;
	cin >> n;
    s=1;
	for (n;n>0;n--) s*=n; 
	cout << s <<  endl;
	return 0;
	}