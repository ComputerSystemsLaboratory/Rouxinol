#include <iostream>
using namespace std;

int main(){
	bool id[31] = {0};
	for(int i = 1; i <= 28; i++){
		int tmp;
		cin >> tmp;
		id[tmp] = true;
	}

	for(int i = 1; i <= 30; i++){
		if(!id[i]) cout << i << endl;
	}
	return 0;
}