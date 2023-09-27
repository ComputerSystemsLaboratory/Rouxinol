#include<iostream>
using namespace std;

int p[33];
int input;

int main(){
	fill(p, p+30, false);

	for(int i=0; i < 28; i++){
		cin >> input;
		p[input-1] = true;
	}
	for(int i=0; i < 30; i++){
		if(!p[i]) cout << i+1 << endl;
	}
}