#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	int p[n];
	int cnt = 0;
	for(int i = 0; i < n; ++i){
		cin >> p[i];
		double rt = sqrt(p[i]);
		for(int j = 2; j <= rt; ++j){
			if(p[i] % j == 0){
				++cnt;
				break;
			}
		}
	}
	cout << n - cnt << endl;
 
	return 0;
}