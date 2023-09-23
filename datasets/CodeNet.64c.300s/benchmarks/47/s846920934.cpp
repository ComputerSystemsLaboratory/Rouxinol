#include <iostream>
#define N 100
using namespace std;
int main(){
	int n[N] = {0};
	int i;
	while(cin >> i){
		n[i-1] ++;
	}
	int max = 0;
	for(int i = 0; i < N; i++){
		if(n[i] > max) max = n[i];
	}
	for(int i = 0; i < N; i++){
		if(n[i] == max) cout << i+1 << endl;
	}
	return 0;
}