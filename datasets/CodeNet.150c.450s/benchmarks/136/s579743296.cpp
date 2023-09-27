#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
	if(!b) return a;
	return gcd(b, a%b);
}

int main(){
	int x[2];
	int max_kyk, min_kbi, a,b;
	while(cin>>x[0]>>x[1]){		
		sort(x, x+2);
		max_kyk = gcd(x[1], x[0]);
		min_kbi = (x[1]/max_kyk)*x[0];
		cout << max_kyk << ' ' << min_kbi << endl;
	}
	return 0;
}