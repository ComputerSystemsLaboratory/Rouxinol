#include <iostream>
#include <iomanip>
using namespace std;
#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,j) for(int i=0;i<j;i++)

int main(){

	int dai[5][4][11] = {};
	int n;
	cin >> n;

	rep(i,n){
		int b,f,r,v;
		cin >> b >> f >> r >> v;
		dai[b][f][r] += v;
	}

	for(int j = 1; j < 5; j++){
		if(j != 1) cout << "####################" << "\n";
		for(int k = 1; k < 4; k++){
			for(int l = 1; l < 11; l++){
				cout << " ";
				cout << dai[j][k][l];
			}
			cout << "\n";
		}
	}

	return 0;
}