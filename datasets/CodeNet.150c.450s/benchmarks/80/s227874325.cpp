#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int N;
	int S, T;
	
	S = T = 0;
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 4; j++){
			cin >> N;
			if(i == 0) S += N;
			else T += N;
		}
	}
	
	cout << max(S, T) << endl;
	
	return 0;
}