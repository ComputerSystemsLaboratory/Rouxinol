#include <iostream>
using namespace std;
 
int main() {
	int n,part,story,num,resi;
	cin >> n;
	int info[5][4][11];
 
	//?????????
	for(int s = 1; s <= 4; s++){
		for(int k = 1; k <= 3; k++){
			for(int t = 1; t <= 10; t++){
				info[s][k][t] = 0;
			}
		}
	}
 
	//?????????????????????????´?
	for(int i = 0; i < n; i++){
	cin >> part >> story >> num >> resi;
	info[part][story][num] += resi;
	}
 
 
	//??????????????????
	for(int a = 1; a <= 4; a++){
		for(int b = 1; b <= 3; b++){
			for(int c = 1; c <= 10; c++){
				cout << " " << info[a][b][c];
			}
			cout << endl;
		}
		if(a != 4)cout << "####################" << endl;
	}
	return 0;
}