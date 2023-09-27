#include <iostream>
#include <string>
#include <array>
using namespace std;

int main(){
	int n;
	cin >> n;
	array<array<int,13>,4> v;
	string str;
	int num;
	for(int i = 0; i < 13; i++) {
		v[0][i] = 0;
		v[1][i] = 0;
		v[2][i] = 0;
		v[3][i] = 0;
	}
	for(int i = 0; i < n; i++){			
		cin >> str >> num;
		if("S" == str) v[0][num-1] = 1;
		if("H" == str) v[1][num-1] = 1;
		if("C" == str) v[2][num-1] = 1;
		if("D" == str) v[3][num-1] = 1;
	}
	for(int j = 0; j < 13; j++){
		if(v[0][j] != 1){
			cout << "S " << j+1 << endl;
		}
	}
	for(int j = 0; j < 13; j++){
		if(v[1][j] != 1){
			cout << "H " << j+1 << endl;
		}
	}
	for(int j = 0; j < 13; j++){
		if(v[2][j] != 1){
			cout << "C " << j+1 << endl;
		}
	}
	for(int j = 0; j < 13; j++){
		if(v[3][j] != 1){
			cout << "D " << j+1 << endl;
		}
	}
	
	return 0;
}