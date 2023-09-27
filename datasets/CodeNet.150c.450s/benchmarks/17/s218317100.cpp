#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[5];
	while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4]){
		sort(a, a + 5, greater<int>());
		for(int i = 0; i < 5; ++i){
			if(i)
				cout << " ";
			cout << a[i];
		}
		cout << endl;
	}
	return 0;
}