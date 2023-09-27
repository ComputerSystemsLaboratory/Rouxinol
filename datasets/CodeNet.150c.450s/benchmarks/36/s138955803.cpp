#include <iostream>

using namespace std;

int main() {
	long d,s;
	while(cin >> d){
		long D = d*d*d;
		s = 0;
		for(int i=1;i*d<600;i++){
			s += D*i*i;
		}
		cout << s << endl;
	}
	return 0;
}