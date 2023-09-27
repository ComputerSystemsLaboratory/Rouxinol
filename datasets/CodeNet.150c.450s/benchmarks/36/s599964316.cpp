#include <iostream>
using namespace std;

int f(int x){
	return x*x;
}
int main(){
	int i, n, d, S;
	while(cin >> d){
		S = 0;
		n = 600 / d;
		for (i = 1; i < n; i++) {
			S += f(i*d)*d;
		}
		cout << S << endl;
	}
	return 0;
}