#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int n;
	long long m, a[5001];

	a[0] = 0;
	while(cin >> n, n != 0){
		for(int i=1; i<=n; i++){
			cin >> a[i];
			a[i] += a[i-1];
		}

		m = -100000;
		for(int i=0; i<=n; i++){
			for(int j=i+1; j<=n; j++){
				m = max(m, a[j] - a[i]);
			}
		}
		cout << m << endl;
	}

	return 0;
}