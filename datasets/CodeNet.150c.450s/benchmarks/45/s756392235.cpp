#include <iostream>
#include <cmath>
using namespace std;

#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;

using Cint = cpp_int;

int main() {
	Cint m; cin >> m; Cint n; cin >> n; Cint max = 1000000007;
	Cint ans = powm(m, n, max);	cout << ans << endl;
	return 0;
}
