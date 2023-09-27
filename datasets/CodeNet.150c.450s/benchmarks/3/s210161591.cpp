#include <iostream>
#include <vector>
#include <map>
#include <cstdlib>
#include <algorithm>
#include <string>	

using namespace std;

int main(){
	string s, inter, s2;
	int q, a, b;
	cin >> s >> q;
	for (int i = 0; i < q; i++){
		cin >> inter >> a >> b;
		if (inter == "replace"){
			cin >> s2;
			s = s.substr(0, a) + s2 + s.substr(b + 1, s.size() - b - 1);
		}
		else if (inter == "print") cout << s.substr(a, b - a + 1) << endl;
		else  reverse(s.begin() + a, s.begin() + b + 1);
	}
}