#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	a -= b;
	if(a){
		if(a < 0){
			cout << "a < b" << endl;
		}else{
			cout << "a > b" << endl;
		}
	}else{
		cout << "a == b" << endl;
	}
	return 0;
}