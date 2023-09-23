#include <iostream>
using namespace std;

int main(){
	bool b[1000000] = {};
	for(int i = 2; i < 1000000; i++){
		b[i] = true;
	}
	for(int i = 2; i < 1000; i++){
		if(b[i]){
			for(int j = i * i; j < 1000000; j += i){
				b[j] = false;
			}
		}
	}

	int n;
	while(cin >> n){
		int count = 0;
		for(int i = 0; i <= n; i++){
			if(b[i]){
				count ++;
			}
		}
		cout << count << endl;
	}
	return 0;
}