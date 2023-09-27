#include <iostream>
using namespace std;

int main() {

	int r[3] = {0, 0, 0};
	int h;

	for(int i = 0; i < 10; i++){
		cin >> h;
		if(h > r[0]){
			r[2] = r[1];
			r[1] = r[0];
			r[0] = h;
		}else if(h > r[1]){
			r[2] = r[1];
			r[1] = h;
		}else if(h > r[2]){
			r[2] = h;
		}
	}

	for(int i = 0; i < 3; i++){
		cout << r[i] << endl;
	}

	return 0;
}