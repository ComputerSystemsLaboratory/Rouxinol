#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

int a[110];

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> a[i];
		cout << a[i];
		if(i != n - 1)
			cout << " ";
		else
			cout << endl;
	}

	for(int i = 1; i < n; ++i){
		int v = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > v){
			a[j + 1] = a[j];
			--j;
		}
		a[j + 1] = v;

		for(int k = 0; k < n; ++k){
			cout << a[k];
			if(k != n - 1)
				cout << " ";
			else
				cout << endl;
		}
	}

	return 0;
}