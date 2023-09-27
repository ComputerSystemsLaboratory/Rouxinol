#include"bits/stdc++.h"
using namespace std;

int main(){

	int answer[5];
	bool got[30];
	for(int i = 0; i < 30; i++){
		got[i] = false;
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

	
	
	int input;

	for(int i = 0; i < 28; i++){
		cin >> input;
		got[input -1] = true;
	}
	for(int i = 1; i <= 30; i++){
		if(got[i -1] == false){
			cout << i << endl;
		}
	}

	return 0;
}
