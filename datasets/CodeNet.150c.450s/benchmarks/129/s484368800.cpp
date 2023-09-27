#include <iostream>
#define  N     102
using namespace std;

int main(){
	int r, c, table[N][N] = {0};

	cin>>r>>c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>table[i][j];
		}
	}

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			table[i][c] += table[i][j];
		}
	}
	
	for(int j=0;j<=c;j++){
		for(int i=0;i<r;i++){
			table[r][j] += table[i][j];
		}
	}

	for(int i=0;i<=r;i++){
		for(int j=0;j<=c;j++){
			if(j != 0) cout<<" ";
			cout<<table[i][j];
		}
		cout<<endl;
	}
	return 0;
}