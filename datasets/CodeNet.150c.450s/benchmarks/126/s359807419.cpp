//
//  main.cpp

#include <iostream>
using namespace std;

int main(){
	while(1){
		int a,b;
		cin >> a >> b;
		if(a == 0 && b == 0){
			return 0;
		}
		int n;
		cin >> n;
		bool canGo[17][17];
		for(int i=0;i<17;i++){
			for(int j = 0;j<17;j++){
				canGo[i][j] = true;
			}
		}
		for(int i=0;i<n;i++){
			int A,B;
			cin >> A >> B;
			canGo[A][B] = false;
		}
		
		int matrix[17][17];
		for(int i=0;i<17;i++){
			for(int j=0;j<17;j++){
				matrix[i][j] = 0;
			}
		}
		matrix[1][1] = 1;
		
		for(int i=1;i<=a;i++){
			for(int j=1;j<=b;j++){
				if(j == 1 && i == 1)continue;
				if(canGo[i][j]){
					matrix[i][j] = matrix[i-1][j] + matrix[i][j-1];
				}else{
					matrix[i][j] = 0;
				}
			}
		}
		cout << matrix[a][b] << endl;
	}
	return 0;
}