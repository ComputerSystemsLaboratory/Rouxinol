#include<iostream>
using namespace std;

int main(){
	int n, m, t, b;
	long long g;
	t = 1000000;
	b = -1000000;
	g = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> m ;
		if(m < t){
			t = m;
		}
		
		if(m > b){
			b = m;
		}
		g += m;
		
	}
	cout << t << " " << b << " " << g << endl;
	
	return 0;
}