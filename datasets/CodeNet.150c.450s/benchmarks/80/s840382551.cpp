#include <iostream>

using namespace std;

int main(){
	int b, s, t;
	s = 0;
	t = 0;

	for (int i = 0; i < 4; i++){
		cin >> b;
		s += b;
	}
	for (int i = 0; i < 4; i++){
		cin >> b;
		t += b;
	}

	if (s >= t){
		cout << s << endl;
	}
	else {
		cout << t << endl;
	}
		
}