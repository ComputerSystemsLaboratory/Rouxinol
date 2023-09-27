#include <iostream>
using namespace std;

int main() {
	int n;
	while(1){
		cin >> n;
		if(n == 0) break;
		int a[10000], b[10000], A=0, B=0;
		for(int i=0; i<n; i++){
			cin >> a[i] >> b[i];
			int sum = a[i]+b[i];
			if(a[i]>b[i]) A += sum;
			if(a[i]==b[i]){
				A += a[i];
				B += b[i];
			}
			if(a[i]<b[i]) B += sum;
		}
		cout << A << ' ' << B << endl;
	}
	return 0;
}
