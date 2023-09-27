#include <iostream>
using namespace std;

long long fuct(int n){
	long long m;
	if(n==0) return 1;
	m = fuct(n-1);
	return m * n;
}

int main(){
	long long ans;
	int n;
	cin >> n;
	ans = fuct(n);
	cout << ans << endl;
	return 0;
}