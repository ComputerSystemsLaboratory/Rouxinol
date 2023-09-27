#include <iostream>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int a[n][m],b[m];
	int x=0,total=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> x;
			a[i][j] = x;
		}
	}
	x=0;
	for(int i=0;i<m;i++){
		cin >> x;
		b[i] = x;
	}
	x=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			x = a[i][j]*b[j];
			total += x;
		}
		cout << total << endl;
		total = 0;
	}
}