#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int r,c,sum,all;
	cin >> r >> c;

	int t[r][c];

	for(int i=0;i<r;i++){
		sum = 0;
		for(int j=0;j<c;j++){
			cin >> t[i][j];
			cout << t[i][j] << " ";
			sum = sum + t[i][j];
		}
		cout << sum << endl;
	}

	all = 0;

	for(int j=0;j<c;j++){
		sum = 0;
		for(int i=0;i<r;i++){
			sum = sum + t[i][j];
		}
		cout << sum << " ";
		all = all + sum;
	}

	cout << all << endl;

}