#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str, order, p;
	int q, n1, n2;
	cin >> str >> q;
	for (int i = 0;i < q;i++) {
		cin >> order >> n1 >> n2;
		if (order == "print")
			cout << str.substr(n1, n2-n1+1) << endl;
		else if (order == "reverse") {
			reverse(str.begin()+n1,str.begin()+n2+1);				
		}
		else {
			cin >> p;
			str.replace(n1, n2-n1+1, p);
		}
			
	}

}