#include <bits/stdc++.h>
#include <vector>
using namespace std;
int a[9], h;
int main(){
	for(int i = 1; i <= 5; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= 4; i++){
		for(int u = 5; u > i; u--){
			if(a[u] > a[u-1]){
				h = a[u];
				a[u] = a[u-1];
				a[u-1] = h;
			}
		}
	}
	for(int i = 1; i <= 5; i++){
		if(i == 5)
			cout << a[i] << "\n";
		else
			cout << a[i] << " ";
	}
	return 0;
}