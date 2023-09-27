#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n,m;
	cin>> n>> m;
	int a[n][m];
	vector<int> v1;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin>> a[i][j];
		}
	}
	int x;
	for (int i=0;i<m;i++){
		cin>> x;
		v1.push_back(x);
	}
	vector<int> c1;
	x=0;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			x=x+(a[i][j]*v1[j]);
		}
		c1.push_back(x);
		x=0;
	}
	for (int i=0;i<n;i++){
		cout<< c1[i]<< endl;
	}
	return 0;
}