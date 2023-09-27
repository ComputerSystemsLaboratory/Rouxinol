#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int m, M;
	long int S = 0;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		if(a < m || i == 0) m = a;
		if(a > M || i == 0) M = a;
		S += a;
	}
	cout << m << ' ' << M << ' ' << S << endl;
	return 0;
}