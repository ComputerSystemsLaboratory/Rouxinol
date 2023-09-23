#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	long n;
	cin >> n;
	long cnt = 0;
	for (long i = 0; i < n; i++){
		long m;
		cin >> m;
		bool p = 1;
		long o;
		o = sqrt(m);
		for (long j = 0; j < o; j++){
			if (j > 0 && m % (j + 1) == 0){
				p = 0;
			}
		}
		if (p == 1) cnt++;
	}
	cout << cnt << endl;
	return 0;
}