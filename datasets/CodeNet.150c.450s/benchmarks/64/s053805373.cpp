#include <iostream>
using namespace std;

int n, A[50];

bool solve(int i, int m){
	if(m==0) return true;
	if(i >= n) return false;
	return (solve(i+1, m) || solve(i+1, m-A[i]));
}


int main() {
	ios::sync_with_stdio(false);
	
	int m;
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> A[i];
	}
	
	cin >> m;
	int B[m];
	
	for(int i=0; i<m; i++){
		cin >> B[i];
		if(solve(0, B[i])) cout << "yes\n";
		else cout << "no\n";
	}
	
	
	return 0;
}