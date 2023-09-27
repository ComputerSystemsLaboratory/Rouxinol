#include <iostream>
using namespace std;

int main(){
	const char* wall="####################";
	int n , b[1000] , f[1000] , r[1000] , v[1000];
	int p[3][10][4]={0,0,0};
	cin>>n;
	for(int i=0 ; i<n ; i++){
		cin>>b[i]>>f[i]>>r[i]>>v[i];
		p[f[i]-1][r[i]-1][b[i]-1]+=v[i]; //floor room building
	}
	for(int i=0 ; i<4 ; i++){
		for(int j=0 ; j<3 ; j++){
			for(int k=0 ; k<9 ; k++){
				cout << " " <<p[j][k][i];
			}
			//if(i==3 && j==2){
			//	cout << " " <<p[2][9][3];
			//} else {
				cout << " " <<p[j][9][i] << endl;
			//}
		}
		if(i!=3){
		cout << wall << endl;
		}
	}
	return 0;
}