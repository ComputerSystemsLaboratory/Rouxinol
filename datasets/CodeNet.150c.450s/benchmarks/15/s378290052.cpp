#include <iostream>
using namespace std;

int main() {
	const int MAX=10000;
	int n, m, a[MAX], b, cnt=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	cin >> m;
	for(int i=0; i<m; i++){
		cin >> b;
		for(int j=0; j<n; j++){
			if(b==a[j]) {
				cnt++;
				break;
			}
		}
	}
	cout << cnt << endl;
}