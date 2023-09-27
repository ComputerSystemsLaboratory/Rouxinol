#include <set>
#include <string>
#include <iostream>
using namespace std;

int main() {
	int n;
	string a,b;
	typedef set<string> set_t;
	set_t A;
	cin >> n;
	for (int i=1; i<=n; i++){
		cin >> a >> b;
		if (a == "insert"){
			A.insert(b);
		}else{
			cout << (A.count(b) ? "yes" : "no") << endl;
		}
	}
}