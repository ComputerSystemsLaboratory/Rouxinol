#include<iostream>
#include<string>
#include<algorithm>

using  namespace std;

int main(){
	int a[100];
	int b[100];
	int n, m;
	
	
	while (cin >> n >> m){
		int diff = 0;
		if (n == 0 && m == 0){
			break;
		}
		for (int i = 0; i < n; i++){
			cin >> a[i];
			diff += a[i];
		}
		for (int i = 0; i < m; i++){
			cin >> b[i];
			diff -= b[i];
		}

		sort(a, a + n);
		sort(b, b + m);

		int x1 = -1, x2 = -1;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				if (diff == (a[i] - b[j]) * 2 && x1 == -1){
					x1 = a[i]; x2 = b[j];
				}
			}
		}
		if (x1 == -1){
			cout << -1 << endl;
		}
		else {
			cout << x1 << " " << x2 << endl;
		}

	}


}