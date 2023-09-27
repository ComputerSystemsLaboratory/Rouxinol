#include <iostream>
#include <string>
using namespace std;

int main(){
	string x;
	while (cin >> x){
		if (x == (string)"0") break;
		long s = 0;
		for (long i = 0; i < x.size(); i++){
			s += (char)x[i] - (long)'0';
		}
		cout << s << endl;
	}
	return 0;
}