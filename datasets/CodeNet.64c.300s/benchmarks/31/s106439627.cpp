#include<iostream>

using namespace std;

int main(){
	int tei[31] = {0}, i, hikaku = 1, j = 0, k;
	
	for(i = 0; i < 28; i ++){
		cin >> k;
		tei[k] = 1;
	}
	for(i = 1; i <= 30; i ++){
		if(tei[i] != 1){
			cout << i << endl;
		}
	}
	return 0;
}