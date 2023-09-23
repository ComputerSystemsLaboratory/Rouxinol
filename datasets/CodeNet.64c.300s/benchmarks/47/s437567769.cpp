#include<iostream>
using namespace std;

int main(){
	int n[101] = {0}, temp, max = -1;
	while(cin >>temp){
		n[temp]++;
		if(n[temp] > max) max = n[temp];
	}
	for(int i = 1; i <= 100; i++){
		if(n[i] >= max) cout <<i <<endl;
	}
	return 0;
}