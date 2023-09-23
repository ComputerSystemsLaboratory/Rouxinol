#include <iostream>
using namespace std;

int n,m,p;
int main() {
	cin >> n >> m;
	if(n<m) {
		p = n;
		n = m;
		m = p;
	}
	while(n%m!=0) {
		p = n%m;
		n = m;
		m = p;
	}
	cout << m << endl;
}