#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int d, ans, n;
	while(cin >> d){
		ans = pow(d, 3);
		n = 600 / d - 1;
		ans *= n*(n+1)*(2*n+1) / 6;
		cout << ans << endl;
	}
	return 0; 
}