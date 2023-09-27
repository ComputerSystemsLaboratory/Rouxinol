#include"bits/stdc++.h"
using namespace std;

int main(){

	int answer[5];
	set<int> got;
	int input;

	for(int i = 0; i < 30; i++){
		cin >> input;
		got.insert(input);
	}
	
	for(int i = 1; i <= 30; i++){
		if(got.count(i) == 0){
			cout << i << endl;
		}
	}

	/*
	int datanum = 0;
	for(int dataset = 0; dataset < 1; dataset++){
		if(input == 0) break;


		answer[dataset] = sum;

		datanum++;
	}

	for(int dataset = 0; dataset < datanum; dataset++){
		cout << answer[dataset] << endl;
	}
	*/

	

	return 0;
}
