#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
    int n, a[1000];
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 1; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(j == 0) cout << a[j];
			else cout << " " << a[j];
		} cout << endl;
		int v = a[i];
		int j = i-1;
		while(j >= 0 && a[j] > v) {
			a[j+1] = a[j];
			j--;
			a[j+1] = v;
		}
	}
	for(int j = 0; j < n; j++) {
		if(j == 0) cout << a[j];
		else cout << " " << a[j];
		} cout << endl;
	return 0;
}