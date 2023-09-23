#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a,b,c;
	for(int i = 0; i < n; i++){
		cin >> a >> b >> c;
		if(sqrt(a*a) == sqrt(b*b+c*c) || sqrt(b*b) == sqrt(a*a+c*c) || sqrt(c*c) == sqrt(a*a+b*b)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}