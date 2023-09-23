#include<iostream>
using namespace std;

int main(){

	int x, list[31] = {0};

	for(int i=0; i<28; i++){
		cin >> x;
		list[x] = 1;
	}

	for(int i=1; i<31; i++){
		if(list[i] == 0) cout << i << endl;
	}

	return 0;

}