#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,k;
	int c[4][14] = {0};
	string s;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s >> k;
		if(s == "S"){
			c[0][k] = 1;
		}
		if(s == "H"){
			c[1][k] = 1;
		}
		if(s == "C"){
			c[2][k] = 1;
		}
		if(s == "D"){
			c[3][k] = 1;
		}
	}
	for(int i=0;i<4;i++){
		for(int j=1;j<=13;j++){
			if(c[i][j] == 0){
				switch (i){
					case 0:
						cout << "S " << j;
						break;
					case 1:
						cout << "H " << j;
						break;
					case 2:
						cout << "C " << j;
						break;
					case 3:
						cout << "D " << j;
						break;

				}
				cout << endl;
			}
		}
	}
}