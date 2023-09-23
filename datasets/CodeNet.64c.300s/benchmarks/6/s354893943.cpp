#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int b, f, r, v;
	int house[4][3][10];
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 10; k++){
				house[i][j][k] = 0;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cin >> b >> f >> r >> v;
		b--;
		f--;
		r--;
		house[b][f][r] += v;
	}

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 10; k++){
				cout << " " << house[i][j][k];
			}
			cout << endl;
		}
		if(i < 3){
			for(int j = 0; j < 20; j++)cout << "#";
			cout << endl;
		}	
	}
}