#include <iostream>
using namespace std;

int main(){
	int n, t = 100000;
	cin >> n;
	for( int i = 0; i < n; ++i){
		t = 1.05 * t;
		t = (t/1000)*1000 + ((t % 1000 != 0) ? 1000 : 0);
	}
	cout << t << "\n";
	return 0;
}