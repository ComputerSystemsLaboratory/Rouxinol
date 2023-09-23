#include<iostream>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	int m = 100000;
	
	for(int i = 0; i < n; ++i){
		m *= 1.05;
		if(m % 1000 != 0)
			m += 1000 - m % 1000;
	}
	
	cout << m << endl;
	
	return 0;
}