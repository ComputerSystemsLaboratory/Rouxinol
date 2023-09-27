#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
	vector<vector<double> > mat(2, vector<double>(3));
	while(cin>>mat[0][0]>>mat[0][1]>>mat[0][2]>>mat[1][0]>>mat[1][1]>>mat[1][2]){
		if(mat[1][0]!=0) swap(mat[0], mat[1]);
		for(int i=0; i<2; i++){
			if(mat[i][0]!=0){
				for(int j=2; j>=0; j--){
					mat[i][j] /= mat[i][0];
				}
			}
		}
		if(mat[1][0]!=0){
			for(int i=0; i<3; i++){
				mat[1][i] -= mat[0][i];
			}
		}
		mat[1][2] /= mat[1][1];
		mat[0][2] -= mat[1][2]*mat[0][1];
		
		cout << fixed;
		cout << setprecision(3);
		cout << mat[0][2] << " " << mat[1][2] << endl;
	}
	return 0;
}