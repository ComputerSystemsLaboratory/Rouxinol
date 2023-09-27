#include <iostream>

using namespace std;

int main(){
	int n,a[10000],q,q1,q2,q3,q3s;
	cin >> n >> q;
	for (int i = 0; i <= n; i++){
		a[i] = i;
	}
	for (int i = 0; i < q; i++){
		cin >> q1 >> q2 >> q3;
		if (q1){
			if (a[q2] == a[q3]){
				cout << 1 << endl;
			} else{
				cout << 0 << endl;
			}
		} else {
			q3s = a[q3];
			for (int j = 0; j <= n; j++){
				if (a[j] == q3s){
					a[j] = a[q2];
				}
			}
		}
	}
	return 0;
}