//
//  main.cpp

#include <iostream>
using namespace std;


int main(){	
	bool checked[31] = {};
	for(int i=0;i<28;i++){
		int input;
		cin >> input;
		checked[input] = true;
	}
	for(int i=1;i<=30;i++){
		if(!checked[i]){
			cout << i << endl;
		}
	}
	return 0;
}