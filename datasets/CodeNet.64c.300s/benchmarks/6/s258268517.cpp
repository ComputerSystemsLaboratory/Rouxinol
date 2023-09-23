#include <iostream>
using namespace std;


int main(){
	int n,map[4][3][10];
	cin >> n;
	for(int k=0;k<4;k++){
		for(int i=0;i<3;i++){
			for(int j=0;j<10;j++){
				map[k][i][j]=0;
			}
		}
	}
	while(n--){
		int b,f,r,v;
		cin >> b >> f >> r >> v;
		map[b-1][f-1][r-1]+=v;
	}
	for(int k=0;k<4;k++){
		for(int i=0;i<3;i++){
			for(int j=0;j<10;j++){
				cout << " " << map[k][i][j];
			}
			cout << endl;
		}
		if(k!=3) cout << "####################" << endl;
	}
	return 0;
}