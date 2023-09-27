#include <iostream>
#include <vector>
using namespace std;

int main(){
	long n = 0;
	long b = 0, f = 0, r = 0, v = 0;
	long rn = 0, rn2 = 0;
	vector<long> a(120, 0);

	cin >> n;

	for (long i = 0; i < n; i++){
		cin >> b >> f >> r >> v;
		rn = (b - 1) * 30 + (f - 1) * 10 + (r - 1);
		a[rn] += v;
	}

	for (long i = 0; i < 4; i++){
		for (long j = 0; j < 3; j++){
			for (long k = 0; k < 10; k++){
				rn2 = i * 30 + j * 10 + k;
				cout << " " << a[rn2];
			}
			cout << endl;
		}
		if (i != 3){
			cout << "####################" << endl;
		}
	}
}