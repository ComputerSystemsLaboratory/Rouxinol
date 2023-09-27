#include <iostream>
#include <vector>
using namespace std;

int main(){
	long n, q, C = 0;
	cin >> n;
	vector<long> S(n);
	for (long i = 0; i < n; i++) cin >> S[i];
	cin >> q;
	vector<long> T(q);
	for (long i = 0; i < q; i++) cin >> T[i];
	for (long i = 0; i < q; i++){
		for (long j = 0; j < n; j++){
			if (T[i] == S[j]){
				C++;
				break;
			}
		}
	}
	cout << C << endl;
	return 0;
}