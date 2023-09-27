#include <iostream>
using namespace std;

int main(void){
	int s[31] = {1, 1, 2};
	int n;
	
	for(int i = 3; i <= 30; i++){
		s[i] = s[i-1] + s[i-2] + s[i-3];
	}

	while(true){
		cin >> n;
		if(!n) break;
		cout << (s[n] / 365 / 10) + 1 << endl;
	}

  return 0;
}