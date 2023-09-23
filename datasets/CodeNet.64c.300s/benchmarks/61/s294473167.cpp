#include <iostream>
#include <string>
using namespace std;

int n;

int main(){
	int r,c,m[101][101];
	cin >> r >> c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin >> m[i][j];
		}
	}
		for(int i=0;i<r;i++)m[i][c]=0;
		for(int i=0;i<c;i++)m[r][i]=0;
		m[r][c]=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			m[i][c]+=m[i][j];
		}
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			m[r][i]+=m[j][i];
		}
	}
	for(int i=0;i<r;i++){
		m[r][c]+=m[i][c];
	}
	for(int i=0;i<r+1;i++){
		for(int j=0;j<c+1;j++){
			cout << m[i][j];
			if(j!=c) cout << " ";
		}
		cout << endl;
	}
	
	return 0;
}