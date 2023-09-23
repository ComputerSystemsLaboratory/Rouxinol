#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

signed main() {
	int a,b;
	while (cin >> a >> b, a | b) {
		(a>b) ? (cout<<b<<" "<<a<<endl) : (cout << a << " " << b << endl);
}
}