#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
	int n; cin >> n;
	int a = 0, b = 0;
	while (n--){
		string str, STR; cin >> str >> STR;
		if (str < STR) b += 3;
		else if (str > STR) a += 3;
		else ++a, ++b;
	}
	cout << a << ' ' << b << '\n';
}