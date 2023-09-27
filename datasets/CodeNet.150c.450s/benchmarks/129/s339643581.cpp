#include <iostream>
#include <vector>
using namespace std;

int main(){
	int r, c;
	cin >> r >> c;
	vector<vector<int> > a(r+1,vector<int>(c+1));
	for(int i=0;i<r;i++){
		a[i][c]=0;
		for(int j=0;j<c;j++){
			cin >> a[i][j];
			a[i][c]+=a[i][j];
		}
	}
	for(int j=0;j<c+1;j++){
		a[r][j]=0;
		for(int i=0;i<r;i++){
			a[r][j]+=a[i][j];
		}
	}
	for(int i=0;i<r+1;i++){
		for(int j=0;j<c+1;j++){
			if(!j) cout << a[i][j];
			else cout << " " << a[i][j];
		}
		cout << endl;
	}
	return 0;
}